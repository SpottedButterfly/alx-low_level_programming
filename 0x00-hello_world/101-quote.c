#include <stdio.h>
#include <unistd.h>
/**
 * main - prints a quote
 *
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	write(2,  "\n", 1);
	return (1);
}
