#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list args);
int _print_str(va_list args);
int _strlen(char *s);
int (*_select_func(char c))(va_list);

#endif
