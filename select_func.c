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

	/** if (c == 'd' || c == 'i')
		return (_print_int);

	if (c == 'b')
		return (_print_bin);

	if (c == 'u')
		return (_print_unint);

	if (c == 'o')
		return (_print_octal);

	if (c == 'X')
		return (_print_hex_upper);

	if (c == 'x')
		return (_print_hex_lower);

	if (c == 'S')
		return (_print_exclusive_string);

	if (c == 'p')
		return (_print_pointers); **/

	return (NULL);
}
