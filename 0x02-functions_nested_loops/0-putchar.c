#include "main.h"
#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: 0 if successful
 */
int _putchar(char c);

int main(void)
{
	char c[8] = "_putchar";

	_putchar(c[8]);
	_putchar('\n');
	return (0);
}
