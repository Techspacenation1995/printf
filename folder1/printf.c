#include <stdarg.h>
#include "main.h"

/**
 * _printf - Implementation of the ffuction that replicates the printf itself
 * @format: The fixed paramenter to look out for.
 *
 * Return: The length of the string.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				func(args);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (i);
}
