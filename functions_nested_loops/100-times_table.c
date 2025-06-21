#include "main.h"
#include <unistd.h>

/**
 * print_digit - print a digit using write
 * @n: digit to print (0-9)
 */
void print_digit(int n)
{
	char d = n + '0';

	write(1, &d, 1);
}

/**
 * print_number - prints an integer from 0 to 999
 * @n: number to print
 */
void print_number(int n)
{
	char digits[3];
	int i = 0;

	if (n == 0)
	{
		write(1, "0", 1);
		return;
	}

	if (n >= 100)
		digits[i++] = (n / 100) + '0';
	if (n >= 10)
		digits[i++] = ((n / 10) % 10) + '0';
	digits[i++] = (n % 10) + '0';

	write(1, digits, i);
}

/**
 * print_times_table - prints the n times table starting from 0
 * @n: number of the times table (0 to 15)
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j != 0)
			{
				write(1, ",", 1);
				if (result < 10)
					write(1, "   ", 3);
				else if (result < 100)
					write(1, "  ", 2);
				else
					write(1, " ", 1);
			}

			print_number(result);
		}
		write(1, "\n", 1);
	}
}
