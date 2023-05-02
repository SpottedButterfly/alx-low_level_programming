#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: first pointer
 * @b: second pointer
 * @tempVal: temporary value for swapping
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tempVal = *a;
	*a = *b;
	*b = tempVal;
}
