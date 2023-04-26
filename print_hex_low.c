#include "main.h"

/**
 * print_hexadecimal_low - prints an unsigned int in hexadecimal
 * using lowercase letters
 * @list: num to print
 *
 * Return: Length of the number
 */
int print_hexadecimal_low(va_list list)
{
	char *ptrbuff;
	int leng;

	ptrbuff = itoa(va_arg(list, unsigned int), 16);

	leng = _print((ptrbuff != NULL) ? ptrbuff : "NULL");

	return (leng);
}
