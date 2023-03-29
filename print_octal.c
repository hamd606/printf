#include "main.h"

/**
 * print_octal - print unsigned octal number
 * @list: num to print
 * Return: len of printed output
 **/
int print_octal(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, unsigned int), 8);

	len = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");

	return (len);
}
