#include "main.h"

/**
 * handler - format handler
 * @str: str format
 * @list: lst of arguments
 * Return: len
 **/
int handler(const char *str, va_list list)
{
	int len, i, num_specifiers;

	len = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			num_specifiers = percent_handler(str, list, &i);
			if (num_specifiers == -1)
				return (-1);

			len += num_specifiers;
			continue;
		}

		_putchar(str[i]);
		len = len + 1;
	}


	return (len);
}

/**
 * percent_handler - handler of the '%' formatter
 * @str: formatted str
 * @list: args lst
 * @i: index
 * Return: 2
 **/
int percent_handler(const char *str, va_list list, int *i)
{
	int len, j, number_formats;
	format formats[] = {
		{'s', print_str}, {'c', print_char},
		{'d', print_int}, {'i', print_int},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_lower_hex},
		{'X', print_upper_hex}, {'p', print_ptr},
		{'r', print_rev_str}, {'R', print_rot}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (len = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			len = formats[j].f(list);
			return (len);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
