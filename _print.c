#include "main.h"

/**
 * _print - To print a char.
 * @str: string parameter
 *
 * Return: string length
 */

int _print(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; ++j)
		_putchar(str[j]);

	return (j);
}
