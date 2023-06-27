#include "main.h"
#include <stdarg.h>

/**
 * _print_int - A function that prints an integer
 * @args: Parameter passed into it.
 *
 * Return: Return an integer.
 */

int _print_int(va_list args)
{
	int num = va_arg(args, int);
	int reversed = 0, digit;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	while (num > 0)
	{
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	while (reversed > 0)
	{
		digit = reversed % 10;
		_putchar('0' + digit);
		reversed /= 10;
	}
	return (0);
}
