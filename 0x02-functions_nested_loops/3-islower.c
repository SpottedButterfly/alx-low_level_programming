#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase
 *
 * @c: character to pass to _islower function
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
