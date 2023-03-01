#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all single digits from 0
 *
 * Return: 0 if success
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
