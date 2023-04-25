#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
  * _putchar - writes a character to stdout
  * @c: the character to write
  *
  * Return: On success 1, on error -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _printf - prints formatted output to stdout
  * @format: the format string
  * @...: the optional arguments
  *
  * Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += write(1, va_arg(args, char *),
						strlen(va_arg(args, char *)));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(format[i]);
					break;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}

