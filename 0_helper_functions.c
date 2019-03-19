#include "holberton.h"

/* define the format string in helper function file */

/**
 * print_char - print char
 * @args: Arguments
 * Return: int
 */

int print_char(va_list all_parameters)
{
       _putchar(va_arg(all_parameters, int));
       return (1);
}

/**
 * print_string - print string
 * @args: arguments
 * Return: int
 */

int print_string(va_list all_parameters)

char *s;
s = va_arg(all_parameters, char);
{
	i = 0;

	while (i < *s)
		_putchar(s);
	i++;
	return (i);
}

/**
 * print_percent - prints percentage sign
 *
 * @c: character representing percent sign
 * Return: int
 */

int print_percent(va_list all_parameters)
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
