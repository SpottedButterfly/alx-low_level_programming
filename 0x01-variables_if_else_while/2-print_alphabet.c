#include <stdio.h>
#include <time.h>

/**
 * main - a program that prints the alphabet
 * in lowercase
 *
 * Return: 0 if successful, 1 otherwise
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}
	return (0);
}
