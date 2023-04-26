#include "main.h"

/**
 * print_integer - prints a number in denary
 * @list: list containing number to print in base 10
 *
 * Return: length of the numbers as a float
 */
int print_integer(va_list list)
{
	char *ptrbuff;
	int size;

	ptrbuff = itoa(va_arg(list, int), 10);

	size = _print((ptrbuff != NULL) ? ptrbuff : "NULL");

	return (size);
}
