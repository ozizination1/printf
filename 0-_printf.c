#include "main.h"

/**
 * _printf - produces output according to a format for chars and strings.
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list allArgs;
	unsigned int i;
	char *str;

	va_start(allArgs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(allArgs, int));
				i++;
			}
			else if (*format == 's')
			{
				*str = (va_arg(allArgs, char*));
				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					i++;
				}
			}
			else if (*format == '%')
			{
				_putchar(va_arg(allArgs, int));
				i++;
			}
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(allArgs);
	return (i);
}
