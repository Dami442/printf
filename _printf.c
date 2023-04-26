#include "main.h"
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Is a character string.
 *
 * Return: The number of chars printed (excluding
 * he null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);

	size = handler(format, args);
	_putchar(-1);

	va_end(args);
	return (size);
}

/**
 * _strlen - Calculates the length of a string
 * @str: String par.
 *
 * Return: Length
 **/

int _strlen(const char *str)
{
	int b;

	for (b = 0; str[b] != 0; b++)
		;

	return (b);
}
