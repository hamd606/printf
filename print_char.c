#include "main.h"
/**
 * print_char - prints a char
 * @list: va_list
 * Return: 1
 */
int print_char(va_list list)
{
	int character;

	character = va_arg(list, int);

	_putchar(character);

	return (1);
}
