#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times in lowercase.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letters;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
	}
	_putchar('\n');
}
