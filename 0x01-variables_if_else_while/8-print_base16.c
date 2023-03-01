#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	char alpha;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
