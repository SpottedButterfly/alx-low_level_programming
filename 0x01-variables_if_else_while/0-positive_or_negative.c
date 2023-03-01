#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning a random number to variable,
 * print whether negative or positive
 *
 * Return: 0 if successful. 1 otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
