#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - Pared down printf with variable arg list
 * @format: format arguments
 * Return: pointer to the
 */
int _printf(const char * format, ...)
{
	specifier_t structs_ar[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"\0", NULL}
	};
	/* points to each unnamed arg in turn */
	va_list all_parameters;
	/* this value is for the iterators and string value */
	char i, j;
	/* this value is for the integer and for the count */
	int count = 0;

	va_start(all_parameters, format);
	/* make all_parameters point to 1st unnamed arg */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (_printf("%s", NULL))
		{
			return ("(nil)");
		}
/* All above are validation statements */
	i = 0;

	while (format && format[i])
	{
		j = 0;

		while (j < 5)
		{
			if (format[i] == *structs_ar[j].spec)
				structs_ar[j].function_ptr(all_parameters);
		}
		j++;
	} i++;

/* Cleans up the list */
	va_end(all_parameters);
/*Write output to stdout, the standard output stream */
/* Returns char count here */
	return (count);
}
