#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _print_str - A function that prints a string to standard output
 * @args: argument passed to it.
 *
 * Return: The string.
 */


int _print_str(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	return (0);
}
