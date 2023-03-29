#include "main.h"

/**
 * _printf - a simpler version of printf
 * @format: the formatted string
 * Return: number of characters printed - '\0'
 **/
int _printf(const char *format, ...)
{
	int len;
	va_list args;

	if (format == NULL)
		return (-1);

	len = _strlen(format);
	if (len <= 0)
		return (0);

	va_start(args, format);
	len = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (len);
}

