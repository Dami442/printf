#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
  * _printf - Printf function
  * @format: format.
  * Return: Printed chars.
  */
int _printf(const char *format, ...)
{
	int j, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buff[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (j = 0; format && format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			buff[buff_ind++] = format[j];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buff, &buff_ind);
			/* write(1, &format[j], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buff, &buff_ind);
			flags = get_flags(format, &j);
			width = get_width(format, &j, list);
			precision = get_precision(format, &j, list);
			size = get_size(format, &j);
			++j;
			printed = handle_print(format, &j, list, buff,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buff, &buff_ind);
	va_end(list);
	return (printed_chars);
}

