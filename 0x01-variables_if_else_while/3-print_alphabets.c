#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints both uppercase
 * and lowercase letters
 *
 * Return: 0 if successful
 */
int main(void)
{
	char lower;
	char upper;

	for  (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
