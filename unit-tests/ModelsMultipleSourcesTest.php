<?php

/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

class ModelsMultipleSourcesTest extends PHPUnit\Framework\TestCase
{

	public function setUp()
	{
		spl_autoload_register(array($this, 'modelsAutoloader'));
	}

	public function tearDown()
	{
		spl_autoload_unregister(array($this, 'modelsAutoloader'));
	}

	public function modelsAutoloader($className)
	{
		$className = str_replace('\\', '/', $className);
		if (file_exists('unit-tests/models/'.$className.'.php')) {
			require 'unit-tests/models/'.$className.'.php';
		}
	}

	protected function _prepareDI()
	{
		Phalcon\Di::reset();

		$di = new Phalcon\Di();

		$di->set('modelsManager', function() {
			return new Phalcon\Mvc\Model\Manager();
		}, true);

		$di->set('modelsMetadata', function() {
			return new Phalcon\Mvc\Model\Metadata\Memory();
		}, true);

		$di->set('modelsQuery', 'Phalcon\Mvc\Model\Query');
		$di->set('modelsQueryBuilder', 'Phalcon\Mvc\Model\Query\Builder');
		$di->set('modelsCriteria', 'Phalcon\\Mvc\\Model\\Criteria');

		$di->set('db', function() {
			throw new Exception('Using default database source');
		}, true);

		$di->set('dbOne', function() {
			require 'unit-tests/config.db.php';
			return new Phalcon\Db\Adapter\Pdo\Mysql($configMysql);
		}, true);

		$di->set('dbTwo', function() {
			require 'unit-tests/config.db.php';
			return new Phalcon\Db\Adapter\Pdo\Mysql($configMysql);
		}, true);
	}

	public function testSourcesStatic()
	{
		require 'unit-tests/config.db.php';
		if (empty($configMysql)) {
			$this->marktestSkipped('Test skipped');
			return;
		}

		$this->_prepareDI();

		$robot = Store\Robots::findFirst();
		$this->assertTrue(is_object($robot));
		$this->assertTrue($robot->save());

		$robotParts = $robot->getRobotParts();
		$this->assertTrue(is_object($robotParts));

		foreach ($robotParts as $robotPart) {
			$this->assertTrue(is_object($robotPart->getRobot()));
			$this->assertTrue(is_object($robotPart->getPart()));
		}
	}

	public function testSourcesInstance()
	{
		require 'unit-tests/config.db.php';
		if (empty($configMysql)) {
			$this->marktestSkipped('Test skipped');
			return;
		}

		$this->_prepareDI();

		$robot = new Store\Robots();
		$this->assertFalse($robot->save());
	}

}
