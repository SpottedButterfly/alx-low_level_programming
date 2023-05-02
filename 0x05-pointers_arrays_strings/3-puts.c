#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: string to be printed
 *
 * Return: nothing.
 */

void _puts(char *str)
{
	int s = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		s++;
	}
	_putchar('\n');
}
