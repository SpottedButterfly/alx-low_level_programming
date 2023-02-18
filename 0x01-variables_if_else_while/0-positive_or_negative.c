#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigning a random number to variable n
 * and printing whether the number stored in the variable
 * is positive or negative.
 * @n: variable to be checked
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
		printf("%i is positive", n);
	}
	else if (n < 0)
	{
		printf("%i is negative", n);
	}
	else
	{
		printf("%i is zero", n);
	}
	return (0);
}
