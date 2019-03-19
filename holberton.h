#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/* typedef used to name user defined data types */

/**
 * printf - function that produces output according to a format
 *
 * @type: Format to print
 * @f: The function pointer to the specifier
 */

typedef struct printf_function
{
	char *type;
	int (*f)();
} printf_t;

int _printf(const char *format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */
