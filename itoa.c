#include "main.h"

/**
 * itoa - converts int to ascii value
 * @num: num par
 * @base: base par
 *
 * Return: char
 */
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *pointer;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	pointer = &buffer[49];
	*pointer = '\0';

	do      {
		*--pointer = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--pointer = sign;
	return (pointer);
}
