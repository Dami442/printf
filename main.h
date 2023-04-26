#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _strlen(const char *str);
int _putchar(char c);
int buffer(char c);

/* handler.c */
int handler(const char *str, va_list list);
int percent_handler(const char *str, va_list list, int *i);

/**
 * struct _format - Typedef struct
 *
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

/* format */
int _print(char *str);
int print_string(va_list list);
int print_char(va_list list);
int print_integer(va_list list);
char *itoa(long int num, int base);
int print_binary(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int print_hexadecimal_low(va_list list);
int is_lowercase(char);
int print_hexadecimal_upp(va_list list);
char *string_to_upper(char *);
int print_pointer(va_list list);
int _strcmp(char *s1, char *s2);
int  print_rev_string(va_list list);
int rot13(char *s);
int print_rot(va_list list);


#endif /* MAIN_H */
