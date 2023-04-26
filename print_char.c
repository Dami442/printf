#include "main.h"
/**
 * print_char - prints char.
 * @list: va_list used
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int au;

	au = va_arg(list, int);

	_putchar(au);

	return (1);
}
