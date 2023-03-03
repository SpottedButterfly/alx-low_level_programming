#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
