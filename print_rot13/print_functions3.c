#include "main.h"

/**
 * p_unsigned - prints an integer
 * @args: va_list
 *
 * Return: number of characters printed
*/

int p_unsigned(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 = va_arg(args, int);
	str = change_base(num2, 10);
	i += _printarg(str);
	return (i);
}

/**
 * p_octal - prints an octal number
 * @args: va_list
 *
 * Return: number of characters printed
*/

int p_octal(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 = va_arg(args, int);
	str = change_base(num2, 8);
	i += _printarg(str);
	return (i);
}

/**
 * p_hex_low - prints a hexadecimal number
 * @args: va_list
 *
 * Return: number of characters printed
*/

int p_hex_low(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 = va_arg(args, int);
	str = change_base(num2, 16);
	i += _printarg(str);
	return (i);
}

/**
 * p_hex_upper - prints an hexadecimal number
 * @args: va_list
 *
 * Return: number of characters printed
*/

int p_hex_upper(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 = va_arg(args, int);
	str = change_base(num2, 16);
	i += _printarg(str);
	return (i);
}

/**
 * p_string_esp - prints a string
 * @args: va_list
 *
 * Return: number of characters printed
*/

int p_string_esp(va_list args)
{
	char *s;
	int i = 6;

	s = va_arg(args, int);
	if (s)
	{
		s = replace_str(s);
		i = _printarg(s);
	}
	else
	{
		_printarg("(null)");
	}
	return (i);
}
