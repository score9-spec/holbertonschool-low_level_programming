#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;

	printf("%ld, %ld, ", a, b);

	for (i = 2; i < 50; i++)
	{
		long int next = a + b;
		if (i == 49)
		{
			printf("%ld\n", next);
		}
		a = b;
		b = next;
	}

	return (0);
}
