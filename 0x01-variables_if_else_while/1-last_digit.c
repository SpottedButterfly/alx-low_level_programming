#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to variable n each time
 * it is executed and then prints last digit of the number
 * stored in n
 * @n: random number
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else (m < 6, m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	return (0);
}
