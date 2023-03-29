#include "main.h"

/**
 * print_lower_hex - prints arg as a hex
 * @list: hex to print
 * Return: len of printed output
 **/
int print_lower_hex(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
