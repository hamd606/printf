#include "main.h"

int is_lower(char);
char *str_to_upper(char *);

/**
 * print_upper_hex - Print a number in hexadecimal format
 * @list: Number to print
 * Return: len of printed output
 **/
int print_upper_hex(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, unsigned int), 16);
	ptr_buffer = str_to_upper(ptr_buffer);

	len = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");

	return (len);
}

/**
 * is_lower - checks if the c is lowercase
 * @c: char input
 * Return: 1 if lower 0 otherwise
 **/
int is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * str_to_upper - makes str upper
 * @s: input str
 * Return: ppercase str
 **/
char *str_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lower(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
