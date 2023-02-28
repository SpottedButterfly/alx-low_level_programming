/**
 * main -  entry point
 * printing size of various types
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	printf("Size of a char: %ld \t  byte(s)", sizeof(char));
	printf("Size of an int: %li \t byte(s)", sizeof(int));
	printf("Size of a long int: %ld \t byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld \t byte(s)", sizeof(long long int));
	printf("Size of a float: %ld \t byte(s)", sizeof(float));
	return (0);
}
