#include "main.h"

/**
 * _putchar - writes a char to stdout
 * @c: char to print be
 * Return: 1 on success -1 otherwise
 */
int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - saves a character in a buffer
 * @c: char
 * Return: 1
 **/
int buffer(char c)
{
	static char buffering[1024]; /*buffering char*/
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buffering, i);
		i = 0;
	}

	if (c != -1)
		buffering[i++] = c;

	return (1);
}
