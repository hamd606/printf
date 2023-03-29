#include "main.h"

/**
 * print_rev_str - prints reversed str
 * @list: arg containing str to be reversed
 * Return: len of printed output
 **/
int  print_rev_str(va_list list)
{
	int i, len;
	const char *str;

	str = va_arg(list, const char *);

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
