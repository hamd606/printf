#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_ptr - prints hex num
 * @list: arg containing hex num
 * Return: len of printed output
 **/
int print_ptr(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptr_buffer, "0"))
		return (print("(nil)"));

	len = print("0x");

	if (!_strcmp(ptr_buffer, "-1"))
		len += print("ffffffffffffffff");
	else
		len += print(ptr_buffer);

	return (len);
}

/**
 * _strcmp - compares two strs
 * @s1: str 1
 * @s2: str 2
 * Return: 0 or int
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
