#include "main.h"

/**
 * _print_bin - A function that prints binary number
 * @args: parameter.
 *
 * Return: This return binary of a certain integer.
 */

int _print_bin(va_list args)
{
	unsigned int n = va_arg(args, int);
	int binary[32];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
	}
	return (0);
}
