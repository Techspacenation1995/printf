#include "main.h"

/**
 * _printf - print out formatted string to the standard output
 * @format: pointer to string
 *
 * Return: Formatted string
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, r_value = 0, r_val_str;
	char *str;
	va_list args;

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			char c = va_arg(args, int);

			_putchar(c);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			r_val_str = _print_str(str);
			i++;
			r_value += r_val_str - 1;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		r_value += 1;
	}
	return (r_value);
}
