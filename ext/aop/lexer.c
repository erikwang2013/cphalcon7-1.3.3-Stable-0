/* Generated by re2c 0.16 on Sat Jul 21 15:03:56 2018 */
/* #line 1 "lexer.re" */

/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
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
  |          ZhuZongXin <dreamsxin@qq.com>                                 |
  |          Julien Salleyron <julien.salleyron@gmail.com>                 |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"

#include <ext/pcre/php_pcre.h>

#include "lexer.h"
#include "aop.h"

int scan(scanner_state *s, scanner_token *t) {

	// char *cursor = s->start;
	int r=SCANNER_RETCODE_IMPOSSIBLE;
	char *q=s->start;//keep initial start

#define YYCTYPE char
#define YYCURSOR (s->start)
#define YYLIMIT (s->end)
#define YYMARKER (s->marker)

	while(SCANNER_RETCODE_IMPOSSIBLE == r) {
	
		
/* #line 51 "lexer.c" */
		{
			YYCTYPE yych;
			static const unsigned char yybm[] = {
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,  64,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				  0,   0,   0,   0,   0,   0,   0,   0, 
				 64,   0,   0,   0,  64,   0,   0,   0, 
				  0,   0, 128,   0,   0,   0,   0,   0, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128,   0,   0,   0,   0,   0,   0, 
				  0, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128,   0, 128,   0,   0, 128, 
				  0, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128,   0,   0,   0,   0, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
				128, 128, 128, 128, 128, 128, 128, 128, 
			};
			yych = *YYCURSOR;
			if (yybm[0+yych] & 64) {
				goto yy7;
			}
			if (yych <= 'V') {
				if (yych <= '-') {
					if (yych <= '\'') {
						if (yych <= 0x00) goto yy3;
						if (yych <= 0x1F) goto yy5;
						if (yych <= '!') goto yy10;
						goto yy5;
					} else {
						if (yych <= ')') {
							if (yych <= '(') goto yy11;
							goto yy5;
						} else {
							if (yych <= '*') goto yy12;
							if (yych <= ',') goto yy5;
							goto yy14;
						}
					}
				} else {
					if (yych <= 'O') {
						if (yych <= '9') {
							if (yych <= '/') goto yy5;
							goto yy12;
						} else {
							if (yych <= ':') goto yy15;
							if (yych <= '@') goto yy5;
							goto yy12;
						}
					} else {
						if (yych <= 'Q') {
							if (yych <= 'P') goto yy16;
							goto yy12;
						} else {
							if (yych <= 'R') goto yy17;
							if (yych <= 'S') goto yy18;
							goto yy12;
						}
					}
				}
			} else {
				if (yych <= 'p') {
					if (yych <= '\\') {
						if (yych <= 'W') goto yy19;
						if (yych == '[') goto yy5;
						goto yy12;
					} else {
						if (yych <= '_') {
							if (yych <= '^') goto yy5;
							goto yy12;
						} else {
							if (yych <= '`') goto yy5;
							if (yych <= 'o') goto yy12;
							goto yy16;
						}
					}
				} else {
					if (yych <= 'w') {
						if (yych <= 'r') {
							if (yych <= 'q') goto yy12;
							goto yy17;
						} else {
							if (yych <= 's') goto yy18;
							if (yych <= 'v') goto yy12;
							goto yy19;
						}
					} else {
						if (yych <= '{') {
							if (yych <= 'z') goto yy12;
							goto yy5;
						} else {
							if (yych <= '|') goto yy20;
							if (yych <= '~') goto yy5;
							goto yy12;
						}
					}
				}
			}
yy2:
/* #line 118 "lexer.re" */
			{
                        t->str_val = estrndup(q,YYCURSOR - q);
                        t->TOKEN = TOKEN_TEXT;
                        return 0;
                }
/* #line 175 "lexer.c" */
yy3:
			++YYCURSOR;
/* #line 127 "lexer.re" */
			{ r = SCANNER_RETCODE_EOF; break; }
/* #line 180 "lexer.c" */
yy5:
			++YYCURSOR;
yy6:
/* #line 129 "lexer.re" */
			{ r = SCANNER_RETCODE_ERR; break; }
/* #line 186 "lexer.c" */
yy7:
			++YYCURSOR;
			yych = *YYCURSOR;
			if (yybm[0+yych] & 64) {
				goto yy7;
			}
/* #line 123 "lexer.re" */
			{ 
                        t->TOKEN = TOKEN_SPACE;
                        return 0; 
                }
/* #line 198 "lexer.c" */
yy10:
			yych = *(YYMARKER = ++YYCURSOR);
			if (yych <= 'S') {
				if (yych == 'P') goto yy22;
				if (yych <= 'R') goto yy6;
				goto yy24;
			} else {
				if (yych <= 'p') {
					if (yych <= 'o') goto yy6;
					goto yy22;
				} else {
					if (yych == 's') goto yy24;
					goto yy6;
				}
			}
yy11:
			yych = *++YYCURSOR;
			if (yych == ')') goto yy25;
			goto yy6;
yy12:
			++YYCURSOR;
			yych = *YYCURSOR;
yy13:
			if (yybm[0+yych] & 128) {
				goto yy12;
			}
			goto yy2;
yy14:
			yych = *++YYCURSOR;
			if (yych == '>') goto yy27;
			goto yy6;
yy15:
			yych = *++YYCURSOR;
			if (yych == ':') goto yy29;
			goto yy6;
yy16:
			yych = *++YYCURSOR;
			if (yych <= 'U') {
				if (yych == 'R') goto yy31;
				if (yych <= 'T') goto yy13;
				goto yy32;
			} else {
				if (yych <= 'r') {
					if (yych <= 'q') goto yy13;
					goto yy31;
				} else {
					if (yych == 'u') goto yy32;
					goto yy13;
				}
			}
yy17:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy33;
			if (yych == 'e') goto yy33;
			goto yy13;
yy18:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy34;
			if (yych == 't') goto yy34;
			goto yy13;
yy19:
			yych = *++YYCURSOR;
			if (yych == 'R') goto yy35;
			if (yych == 'r') goto yy35;
			goto yy13;
yy20:
			++YYCURSOR;
/* #line 94 "lexer.re" */
			{
                        t->TOKEN = TOKEN_OR;
                        return 0;
                }
/* #line 271 "lexer.c" */
yy22:
			yych = *++YYCURSOR;
			if (yych <= 'U') {
				if (yych == 'R') goto yy36;
				if (yych >= 'U') goto yy37;
			} else {
				if (yych <= 'r') {
					if (yych >= 'r') goto yy36;
				} else {
					if (yych == 'u') goto yy37;
				}
			}
yy23:
			YYCURSOR = YYMARKER;
			goto yy6;
yy24:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy38;
			if (yych == 't') goto yy38;
			goto yy23;
yy25:
			++YYCURSOR;
/* #line 52 "lexer.re" */
			{
                        t->TOKEN = TOKEN_FUNCTION;
			return 0;
		}
/* #line 299 "lexer.c" */
yy27:
			++YYCURSOR;
/* #line 56 "lexer.re" */
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
/* #line 307 "lexer.c" */
yy29:
			++YYCURSOR;
/* #line 60 "lexer.re" */
			{
                        t->TOKEN = TOKEN_CLASS;
			return 0;
		}
/* #line 315 "lexer.c" */
yy31:
			yych = *++YYCURSOR;
			if (yych <= 'O') {
				if (yych == 'I') goto yy39;
				if (yych <= 'N') goto yy13;
				goto yy40;
			} else {
				if (yych <= 'i') {
					if (yych <= 'h') goto yy13;
					goto yy39;
				} else {
					if (yych == 'o') goto yy40;
					goto yy13;
				}
			}
yy32:
			yych = *++YYCURSOR;
			if (yych == 'B') goto yy41;
			if (yych == 'b') goto yy41;
			goto yy13;
yy33:
			yych = *++YYCURSOR;
			if (yych == 'A') goto yy42;
			if (yych == 'a') goto yy42;
			goto yy13;
yy34:
			yych = *++YYCURSOR;
			if (yych == 'A') goto yy43;
			if (yych == 'a') goto yy43;
			goto yy13;
yy35:
			yych = *++YYCURSOR;
			if (yych == 'I') goto yy44;
			if (yych == 'i') goto yy44;
			goto yy13;
yy36:
			yych = *++YYCURSOR;
			if (yych <= 'O') {
				if (yych == 'I') goto yy45;
				if (yych <= 'N') goto yy23;
				goto yy46;
			} else {
				if (yych <= 'i') {
					if (yych <= 'h') goto yy23;
					goto yy45;
				} else {
					if (yych == 'o') goto yy46;
					goto yy23;
				}
			}
yy37:
			yych = *++YYCURSOR;
			if (yych == 'B') goto yy47;
			if (yych == 'b') goto yy47;
			goto yy23;
yy38:
			yych = *++YYCURSOR;
			if (yych == 'A') goto yy48;
			if (yych == 'a') goto yy48;
			goto yy23;
yy39:
			yych = *++YYCURSOR;
			if (yych == 'V') goto yy49;
			if (yych == 'v') goto yy49;
			goto yy13;
yy40:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy50;
			if (yych == 't') goto yy50;
			goto yy13;
yy41:
			yych = *++YYCURSOR;
			if (yych == 'L') goto yy51;
			if (yych == 'l') goto yy51;
			goto yy13;
yy42:
			yych = *++YYCURSOR;
			if (yych == 'D') goto yy52;
			if (yych == 'd') goto yy52;
			goto yy13;
yy43:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy54;
			if (yych == 't') goto yy54;
			goto yy13;
yy44:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy55;
			if (yych == 't') goto yy55;
			goto yy13;
yy45:
			yych = *++YYCURSOR;
			if (yych == 'V') goto yy56;
			if (yych == 'v') goto yy56;
			goto yy23;
yy46:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy57;
			if (yych == 't') goto yy57;
			goto yy23;
yy47:
			yych = *++YYCURSOR;
			if (yych == 'L') goto yy58;
			if (yych == 'l') goto yy58;
			goto yy23;
yy48:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy59;
			if (yych == 't') goto yy59;
			goto yy23;
yy49:
			yych = *++YYCURSOR;
			if (yych == 'A') goto yy60;
			if (yych == 'a') goto yy60;
			goto yy13;
yy50:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy61;
			if (yych == 'e') goto yy61;
			goto yy13;
yy51:
			yych = *++YYCURSOR;
			if (yych == 'I') goto yy62;
			if (yych == 'i') goto yy62;
			goto yy13;
yy52:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 64 "lexer.re" */
			{
                        t->TOKEN = TOKEN_PROPERTY;
                        t->int_val = PHALCON_AOP_KIND_READ;
                        return 0;
                }
/* #line 452 "lexer.c" */
yy54:
			yych = *++YYCURSOR;
			if (yych == 'I') goto yy63;
			if (yych == 'i') goto yy63;
			goto yy13;
yy55:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy64;
			if (yych == 'e') goto yy64;
			goto yy13;
yy56:
			yych = *++YYCURSOR;
			if (yych == 'A') goto yy66;
			if (yych == 'a') goto yy66;
			goto yy23;
yy57:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy67;
			if (yych == 'e') goto yy67;
			goto yy23;
yy58:
			yych = *++YYCURSOR;
			if (yych == 'I') goto yy68;
			if (yych == 'i') goto yy68;
			goto yy23;
yy59:
			yych = *++YYCURSOR;
			if (yych == 'I') goto yy69;
			if (yych == 'i') goto yy69;
			goto yy23;
yy60:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy70;
			if (yych == 't') goto yy70;
			goto yy13;
yy61:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy71;
			if (yych == 'c') goto yy71;
			goto yy13;
yy62:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy72;
			if (yych == 'c') goto yy72;
			goto yy13;
yy63:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy74;
			if (yych == 'c') goto yy74;
			goto yy13;
yy64:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 69 "lexer.re" */
			{
                        t->TOKEN = TOKEN_PROPERTY;
                        t->int_val = PHALCON_AOP_KIND_WRITE;
                        return 0;
                }
/* #line 514 "lexer.c" */
yy66:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy76;
			if (yych == 't') goto yy76;
			goto yy23;
yy67:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy77;
			if (yych == 'c') goto yy77;
			goto yy23;
yy68:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy78;
			if (yych == 'c') goto yy78;
			goto yy23;
yy69:
			yych = *++YYCURSOR;
			if (yych == 'C') goto yy80;
			if (yych == 'c') goto yy80;
			goto yy23;
yy70:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy82;
			if (yych == 'e') goto yy82;
			goto yy13;
yy71:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy84;
			if (yych == 't') goto yy84;
			goto yy13;
yy72:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 74 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PUBLIC;
                        return 0;
                }
/* #line 556 "lexer.c" */
yy74:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 89 "lexer.re" */
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 1;
                        return 0;
                }
/* #line 568 "lexer.c" */
yy76:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy85;
			if (yych == 'e') goto yy85;
			goto yy23;
yy77:
			yych = *++YYCURSOR;
			if (yych == 'T') goto yy87;
			if (yych == 't') goto yy87;
			goto yy23;
yy78:
			++YYCURSOR;
/* #line 98 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PROTECTED | ZEND_ACC_PRIVATE;
                        return 0;
                }
/* #line 587 "lexer.c" */
yy80:
			++YYCURSOR;
/* #line 113 "lexer.re" */
			{
                        t->TOKEN = TOKEN_STATIC;
                        t->int_val = 0;
                        return 0;
                }
/* #line 596 "lexer.c" */
yy82:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 84 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PRIVATE;
                        return 0;
                }
/* #line 608 "lexer.c" */
yy84:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy88;
			if (yych == 'e') goto yy88;
			goto yy13;
yy85:
			++YYCURSOR;
/* #line 108 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PROTECTED;
                        return 0;
                }
/* #line 622 "lexer.c" */
yy87:
			yych = *++YYCURSOR;
			if (yych == 'E') goto yy89;
			if (yych == 'e') goto yy89;
			goto yy23;
yy88:
			yych = *++YYCURSOR;
			if (yych == 'D') goto yy90;
			if (yych == 'd') goto yy90;
			goto yy13;
yy89:
			yych = *++YYCURSOR;
			if (yych == 'D') goto yy92;
			if (yych == 'd') goto yy92;
			goto yy23;
yy90:
			++YYCURSOR;
			if (yybm[0+(yych = *YYCURSOR)] & 128) {
				goto yy12;
			}
/* #line 79 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val = ZEND_ACC_PROTECTED;
                        return 0;
                }
/* #line 649 "lexer.c" */
yy92:
			++YYCURSOR;
/* #line 103 "lexer.re" */
			{
                        t->TOKEN = TOKEN_SCOPE;
                        t->int_val  = ZEND_ACC_PUBLIC | ZEND_ACC_PRIVATE;
                        return 0;
                }
/* #line 658 "lexer.c" */
		}
/* #line 130 "lexer.re" */

	}
	return r;
}
