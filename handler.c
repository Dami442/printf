#include "main.h"

/**
 * handler - Format controller
 * @str: string par
 * @list: contains list of args
 *
 * Return: Total size of args with the total size of the base string
 */
int handler(const char *str, va_list list)
{
	int size, y, aux;

	size = 0;
	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] == '%')
		{
			aux = percent_handler(str, list, &y);
			if (aux == -1)
				return (-1);

			size += aux;
			continue;
		}

		_putchar(str[y]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handler - controller for percent format
 * @str: string par
 * @list: list of args
 * @i: to iterate
 *
 * Return: size of num of elements printed
 */
int percent_handler(const char *str, va_list list, int *i)
{
	int size, a, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = a = 0; a < number_formats; a++)
	{
		if (str[*i] == formats[a].type)
		{
			size = formats[a].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
