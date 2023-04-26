#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @list: contains number to print
 *
 * Return: length of the number
 */
int print_unsigned(va_list list)
{
	char *ptrbuff;
	int leng;

	ptrbuff = itoa(va_arg(list, unsigned int), 10);

	leng = _print((ptrbuff != NULL) ? ptrbuff : "NULL");

	return (leng);
}
