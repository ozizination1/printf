#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct fn - Struct fn
 * @ob: The operator
 * @type: The function associated
*/
typedef struct fn
{
	char *ob;
	int (*type)(va_list var);
} fn_t;

int _putchar(char *c);
int _printf(const char *format, ...);
int _printarg(char *c);
char *change_base(unsigned int num, int base);
int p_char(va_list args);
int p_string(va_list args);
int p_percent(va_list args __attribute__((unused)));
int p_int(va_list args);
int p_bin(va_list args);
int p_rev(va_list args);
char *_strcpy(char *dest, const char *str);
int _strlen(char *s);
int *print_formats(int i, char *copyfmt, va_list args);
int p_unsigned(va_list args);
int p_octal(va_list args);
int p_hex_upper(va_list args);
int p_hex_low(va_list args);
char *change_hex_low(unsigned int num, int base);
int p_string_esp(va_list args);
char *replace_str(char *s);
int p_add(va_list args);
char *rot13(char *n);
int p_rot13(va_list args);
<<<<<<< HEAD

=======
>>>>>>> 9921c5d374daab7ceccd44afa65a2d070b78a717
#endif
