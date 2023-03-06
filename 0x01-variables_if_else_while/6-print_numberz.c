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

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
