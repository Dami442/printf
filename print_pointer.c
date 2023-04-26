#include "main.h"
#include <stdio.h>

/**
 * print_pointer - prints a pointer
 * @list: number to print
 *
 * Return: length of the number
 */
int print_pointer(va_list list)
{
	char *ptrbuff;
	int leng;

	ptrbuff = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptrbuff, "0"))
		return (_print("(nil)"));

	leng = _print("0x");

	if (!_strcmp(ptrbuff, "-1"))
		leng += _print("ffffffffffffffff");
	else
		leng += _print(ptrbuff);

	return (leng);
}

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
	}

	return (0);
}
