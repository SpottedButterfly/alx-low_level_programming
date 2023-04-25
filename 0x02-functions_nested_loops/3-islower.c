#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase
 *
 * @ch: character to pass to _islower function
 *
 * Return: 1 if ch is lowercase, otherwise 0
 */

int _islower(int ch)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
