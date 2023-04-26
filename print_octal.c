#include "main.h"

/**
 * print_octal - prints an octal unsigned int
 * @list: Number to print
 *
 * Return: length of the number
 **/
int print_octal(va_list list)
{
	char *ptrbuff;
	int leng;

	ptrbuff = itoa(va_arg(list, unsigned int), 8);

	leng = _print((ptrbuff != NULL) ? ptrbuff : "NULL");

	return (leng);
}
