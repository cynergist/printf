# 0x10. C - printf
---
## by Julien Barbier, co-founder at Holberton School

printf - A printf function

## Description

This project recreates a printf function will print out formats of, <br/>
type char (c), string (s), percentage symbol (%% = %), signed decimal <br/>
integers (d), integers (I).

* Function that produces output according to a format specified
* Write output to stdout, the standard output stream
* Format specifiers handled are c, s, %
* Do not reproduce buffer handling of the printf
* No handling of flag characters
* No handling of precision
* No handling of length modifier

  - env (print a list of the current environment variables).

  - exit (exits the shell).

##### Example 1 | Number 0
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

##### Example 2 | Number 1

```
void print_unsigned(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
			n1 = -n;
			}
			else
				n1 = n;
				if (n1 / 10)
				   print_unsigned(n1 / 10);
				   _putchar((n1 % 10) + '0');
}
```

### List of allowed functions and system calls
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

---
File|Task
---|---
AUTHORS | the authors page
README.md | read me file

#### Compilation

Files are compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c

### Authors

[Koome Mwiti](https://github.com/komerela)

[Cynthia Dominguez](https://github.com/cynergist)