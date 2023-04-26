#include "main.h"

/**
 * print_rev_string - prints a string in reverse
 * @list: list of args
 *
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int j, leng;
	const char *str;

	str = va_arg(list, const char *);

	leng = _strlen(str);

	for (j = leng - 1; j >= 0; j--)
		_putchar(str[j]);

	return (leng);
}
