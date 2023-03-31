#include "main.h"

/**
 * print_str - print str
 * @list: arg congtaining str
 * Return: len of printed ouput
 */
int print_upper_str(va_list list)
{
	char *m;
	int i;
	char hex_prefix[] = "\\x0";
	char big_hex[] = "\\x";
	
	m = va_arg(list, char*);
	
	for (i = 0; m[i]!='\0'; i++)
	{
	
		if(m[i] < 32 || m[i] == 127)
		{
			if (m[i] < 16)
				_printf(strcat(hex_prefix, str_to_upper(itoa((int) m[i], 16))));
			else
				_printf(strcat(big_hex, str_to_upper(itoa((int) m[i], 16))));

		}
		else
			_putchar(m[i]);
	}
	return (1110);
}
