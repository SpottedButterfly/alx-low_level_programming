#include "main.h"

/*
 * print_last_digit - prints the last digit of a number
 *
 * Return: Value of last digit
 */
int print_last_digit(int d)
{
	int num = d;
	int lastDigit;

	lastDigit = num % 10;
	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar(lastDigit + '0');
	/**_putchar('\n');*/
	return lastDigit;
}
