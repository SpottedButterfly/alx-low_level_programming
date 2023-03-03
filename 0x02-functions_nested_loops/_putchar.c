#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: tThe character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c[8])
{
	return(write(1, &c[8], 1));
}
