#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);	
}

void print_alphabet(void)
{
	char alpha;
	char c = '\n';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar(c);

	return;
}
