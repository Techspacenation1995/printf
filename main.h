#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
/* int _print_int(va_list args); */
int _print_str(va_list args);
/** int _print_bin(va_list args);
int _print_unint(va_list args);
int _print_octal(va_list args);
int _print_hex_upper(va_list args);
int _print_hex_lower(va_list args);
int _print_exclusive_string(va_list args);
int _print_pointers(va_list args); **/
int _strlen(char *s);
int (*_select_func(char c))(va_list);
#endif
