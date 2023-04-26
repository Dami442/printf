#include "main.h"

/**
 * print_binary - prints a number in base 2
 * @list: containing list of numbers to print in base 2
 *
 * Return: num legth in binary
 */
int print_binary(va_list list)
{
	char *ptrbuffer;
	int leng;

	ptrbuffer = itoa(va_arg(list, unsigned int), 2);

	leng = _print(ptrbuff);

	return (leng);
}
