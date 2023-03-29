#include "main.h"

/**
 * print_binary - prints binary
 * @list: arg to be peinted in base 2
 *
 * Return: len of printed arr
 **/
int print_binary(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, unsigned int), 2);

	len = print(ptr_buffer);

	return (len);
}
