#include "holberton.h"
#include <stdio.h>
/**
 * print_integer - print integer
 * @all_parameters: arguments
 * Return: int otherwise -1
 */

int print_integer(va_list all_parameters)
{
	_putchar(va_arg(all_parameters, int));
	return (1);
}
