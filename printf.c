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
	char buffer[1024]; /* Local buffer to store the formatted string */
	int i = 0;
	int n_display = 0;
	int buffer_index = 0;  /* Index of the current position in the buffer */
	char *str;
	int (*func)(va_list);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_display++;
		}
		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
			n_display++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				func(args);
				n_display;
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (n_display);
}
