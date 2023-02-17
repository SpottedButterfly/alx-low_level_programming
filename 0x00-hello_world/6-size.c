/**
 * main -  entry point
 * printing size of various types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char), " byte(s)");
	printf("Size of an int: %i", sizeof(int), " byte(s)");
	printf("Size of a long int: %ld", sizeof(long), " byte(s)");
	printf("Size of a long long int: %lld", sizeof(long long int), " byte(s)");
	printf("Size of a float: %lu", sizeof(float), " byte(s)");
	Return (0);
}
