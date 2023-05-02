#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string of characters
 * Return: 0.
 */

int _strlen(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return (ptr - s);
}
