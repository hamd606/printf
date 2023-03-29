#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _strlen(const char *);
int print(char *);
char *itoa(long int, int);
int _printf(const char *, ...);
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);
int print_str(va_list);
int print_char(va_list);
int print_int(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_lower_hex(va_list);
int print_upper_hex(va_list);
int print_ptr(va_list);
int print_rev_str(va_list);
int _putchar(char);
int buffer(char);

/**
 * struct _format - Format struct
 * @type: format
 * @f: The function associated with char
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
