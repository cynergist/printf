#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/* define the format string in helper function file */

/**
 * print_char - print char
 * @args: Arguments
 * Return: void
 */
void _printf_char(va_list all_parameters)
{
       _printf("%c", va_arg(all_parameters, int));
}

/**
 * print_string - print string
 * @args: arguments
 * Return: void
 */

void print_string(va_list all_parameters)
{
        char *str = va_arg(all_parameters, int *);

        if (!str)
        {
                printf("(nil)");
                return;
        }
        printf("%s", str);
}

/**
 * print_percent - prints percentage sign
 *
 * @c: character representing percent sign
 * Return: void
 */

void print_percent(va_list all parameters)
{

	/* Get the character to be written */

	char c = '%';

	/* Write the Character to stdout */
	_putchar(c);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
