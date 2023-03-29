#include "main.h"

/**
 * print_str - print str
 * @list: arg congtaining str
 * Return: len of printed ouput
 */
int print_str(va_list list)
{
	char *m;
	int m_len;

	m = va_arg(list, char*);
	m_len = print((m != NULL) ? m : "(null)");

	return (m_len);
}
