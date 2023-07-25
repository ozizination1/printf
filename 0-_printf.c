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
	int i = 0;
	char *str;

	va_start(allArgs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				putchar(va_arg(allArgs, int));
				i++;
			}
			else if (*format == 's')
			{
				*str = (va_arg(allArgs, char*));
				while (*str != '\0')
				{
					putchar(*str);
					str++;
					i++;
				}
			}
			else if (*format == '%')
			{
				putchar(va_arg(allArgs, int));
				i++;
			}
		}
		else
		{
			putchar(*format);
			i++;
		}
		format++;
	}
	va_end(allArgs);
	return (i);
}
