#include "main.h"

/**
 * _printf - A printf clone
 * @format: const pointer to a char - % include formats
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, *count, *count3;
	int ctbuffer[2];
	int ctbuffer3[2];
	char *copyfmt;
	char copyarray[10000];
	va_list args;

	count = &ctbuffer[0];
	count3 = &ctbuffer[0];
	count[0] = 0;
	count[1] = -1;
	if (format != NULL)
	{
		count[1] = 0;
		copyfmt = _strcpy(copyarray, format);
		va_start(args, format);
		while (copyfmt[i] != '\0')
		{
			if (copyfmt[i] == '%')
			{
				count3 = print_format(i, copyfmt, args);
				if (count3[i] == -1)
					return (-1);
				count{1} += count3[1];
				i += count3[0];
			}
			else
			{	
				count[1] += _putchar(&copyfmt[i]);
			}
			i++;
		}
		va_end(args);
	}
	return (count[1]);
}
