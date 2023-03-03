#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character to pass to _isalpha function
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c);
{
	char ch;

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
