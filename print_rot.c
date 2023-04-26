#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: 0 on success
 */
int rot13(char *s)
{
	int i, j;
	char *norm, *rot13;

	norm = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; norm[j] != '\0'; j++)
		{
			if (s[i] == norm[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!norm[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rot - prints the rot13 string
 * @list: string to encode
 *
 * Return: length of the string encoded
 */
int print_rot(va_list list)
{
	char *ptr;
	int ptrlength;

	ptr = va_arg(list, char *);
	ptrlength = rot13((ptr != NULL) ? ptr : "(ahyy)");

	return (ptrlength);
}
