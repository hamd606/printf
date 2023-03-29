#include "main.h"

/**
 * print_unsigned - print an unsigned int
 * @list: arg containting int
 * Return: len of printed output
 **/
int print_unsigned(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, unsigned int), 10);

	len = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");

	return (len);
}
