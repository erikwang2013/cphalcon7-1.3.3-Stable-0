<?php 

namespace Phalcon\Translate\Adapter {

	/**
	 * Phalcon\Translate\Adapter\Gettext
	 *
	 * Allows to define translation lists using gettext
	 *
	 *
	 *<code>
	 *  $t = new \Phalcon\Translate\Adapter\Gettext(array(
	 *      'locale' => 'en_US.utf8',
	 *      'defaultDomain' => 'messages',
	 *      'directory' => __DIR__ . DIRECTORY_SEPARATOR . 'locale'
	 * ));
	 */
	
	class Gettext extends \Phalcon\Translate\Adapter implements \Phalcon\Translate\AdapterInterface, \ArrayAccess {

		protected $_locale;

		protected $_defaultDomain;

		protected $_directory;

		/**
		 * \Phalcon\Translate\Adapter\Gettext constructor
		 *
		 * @param array $options
		 * @throws \Phalcon\Translate\Exception
		 */
		public function __construct($options){ }


		/**
		 * Returns the translation related to the given key
		 *
		 * @param string $index
		 * @param array $placeholders
		 * @param string $domain
		 * @return string
		 */
		public function query($index, $placeholders=null){ }


		/**
		 * Check whether is defined a translation key in the internal array
		 *
		 * @param string $index
		 * @return boolean
		 */
		public function exists($index){ }

	}
}
