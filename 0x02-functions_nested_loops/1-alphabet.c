#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char alpha;
	char c = '\n';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar(c);
}
