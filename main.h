#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 1024
int _putchar(char c);
int _printf(const char *format, ...);
int handle_print(const char *format, int *i, va_list list, char *buffer,
		int flags, int width, int precision, int size);
void print_buffer(char buffer[], int *buff_ind);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

#endif /* MAIN_H */

