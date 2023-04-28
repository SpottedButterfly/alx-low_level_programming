#include "main.h"

/**
 * print_most_numbers - print numbers 0 to 9, except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		switch (num)
		{
			case '2':
				break;
			case '4':
				break;
			default:
				_putchar(num);
		}
		/*_putchar(num);*/
	}
	_putchar('\n');
}
