#include "main.h"

/**
 * print_hexadecimal_upp - prints a number in hexadecimal
 * @list: num to print
 *
 * Return: Length of the number
 **/
int print_hexadecimal_upp(va_list list)
{
	char *ptrbuff;
	int length;

	ptrbuff = itoa(va_arg(list, unsigned int), 16);
	ptrbuff = string_to_upper(ptrbuff);

	length = _print((ptrbuff != NULL) ? ptrbuff : "NULL");

	return (length);
}

/**
 * is_lowercase - checks for lowercase chars
 * @c: character to check
 * Return: 0 on success
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (is_lowercase(s[j]))
		{
			s[j] = s[j] - 32;
		}
	}

	return (s);
}
