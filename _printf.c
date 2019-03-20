#include "holberton.h"
#include <stdio.h>

/**
 * _printf - Pared down printf with variable arg list
 * @format: format arguments
 * Return: Number of chars printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	specifier_t structs_ar[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};
	/* points to each unnamed arg in turn */
	va_list all_parameters;
	int i, j;
	int count = 0;

	va_start(all_parameters, format);
/* All below are validation statements */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i++;
		else
		{
			_putchar(format[i]);
			i++;
			count++;
			continue;
		}
		j = 0;

		while (structs_ar[j].function_ptr)
		{
			if (format[i] == structs_ar[j].spec)
			{
				count += structs_ar[j].function_ptr(all_parameters);
				j = -1;
				break;
			}
			j++;
		}
		if (j != -1)
		{
			_putchar('%');
			_putchar(format[i]);
                	count += 2;
		}
		i++;
	}
/* Cleans up the list */
	va_end(all_parameters);
/* Returns char count here */
	return (count);
}
