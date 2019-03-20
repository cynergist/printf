#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/* typedef used to name user defined data types */

/**
 * printf - function that produces output according to a format
 *
 * @type: Format to print
 * @f: The function pointer to the specifier
 */

typedef struct specifier
{
	char *spec;
	int (*function_ptr)(va_list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list all_parameters);
int print_string(va_list all_parameters);
int print_percent(va_list all_parameters);
int print_integer(va_list all_parameters);
int _puts(char *str);
#endif /* HOLBERTON_H */
