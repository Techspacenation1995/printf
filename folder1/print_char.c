#include "main.h"
#include <stdarg.h>

/**
 * _print_char - A function that prints a characte to the screen
 * @args: Parameter passed
 *
 * Return:  Printed output
 */

int _print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);

	return (1);
}
