#include <stdio.h>

/**
 * main - print all single digit numbers from 0
 * using putchar
 *
 * Return: 0 if success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}
