#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet
 *
 * Return: 0 if successful
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters == 'e' && letters == 'q')
			continue;
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
