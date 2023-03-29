#include "main.h"

/**
 * print_int - prints an int
 * @list: arg containing the int
 * Return: len of printed output
 **/
int print_int(va_list list)
{
	char *ptr_buffer;
	int len;

	ptr_buffer = itoa(va_arg(list, int), 10);

	len = print((ptr_buffer != NULL) ? ptr_buffer : "NULL");

	return (len);
}
