#include "main.h"
#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c[9] = "_putchar\n";

	_putchar(c[9]);
	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
