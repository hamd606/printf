#include "main.h"

/**
 * rot13_str - encodes a str using Rot13 alg
 * @s: input str
 * Return: output str
 */
int rot13_str(char *s)
{
	int i, j;
	char *unencoded_str, *rot13_str;

	unencoded_str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13_str = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; unencoded_str[j] != '\0'; j++)
		{
			if (s[i] == unencoded_str[j])
			{
				_putchar(rot13_str[j]);
				break;
			}
		}

		if (!unencoded_str[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rot - prints rot13 of a str
 * @list: arg coontaining str
 * Return: len of printed output
 **/
int print_rot(va_list list)
{
	char *m;
	int m_len;

	m = va_arg(list, char *);
	m_len = rot13_str((m != NULL) ? m : "(ahyy)");

	return (m_len);
}
