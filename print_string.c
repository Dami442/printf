#include "main.h"

/**
 * print_string - prints a string
 * @list: list to be used
 *
 * Return: string length.
 */

int print_string(va_list list)
{
	char *ptr;
	int str_len;

	ptr = va_arg(list, char*);
	str_len = _print((ptr != NULL) ? ptr : "(null)");

	return (str_len);
}
