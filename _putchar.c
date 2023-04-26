#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 otherwise
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - saves the char in a buffer
 * @c: Char parameter
 *
 * Return: 1 on success, -1 otherwise
 */

int buffer(char c)
{
	static char buffering[1024];
	static int j;

	if (c == -1 || j == 1024)
	{
		write(1, buffering, j);
		j = 0;
	}

	if (c != -1)
		buffering[j++] = c;

	return (1);
}

