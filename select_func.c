#include "main.h"

/**
 * _select_func - A pointer that points to the function its desires
 * for printf implementation
 * @c: Argument to the selcted function pointers.
 *
 * Return: desired function.
 */

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
		return (_print_char);

	if (c == 's')
		return (_print_str);

	return (NULL);
}
