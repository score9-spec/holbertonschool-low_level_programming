#include <stdio.h>

/**
* main - Prints all possible combinations
* of two two-digit numbers.
*
* Description: This program generates
* and prints all possible combinations
* of two two-digit numbers, ranging from 00 to 99.
* The numbers are separated
* by a space, and the combinations are separated
* by a comma followed by a space.
* The output is in ascending order.
*
* Return: Always 0.
*/
int main(void)
{
int i; /* Loop counter for the first number. */
int j; /* Loop counter for the second number. */

for (i = 0; i <= 98; i++)
{
for (j = i + 1; j <= 99; j++)
{
/* Print the two numbers with leading zeros if necessary.*/
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');

/* print a comma and a space after each combination, except the last one */
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
/*Print a newline character to end the output */
putchar('\n');

return (0);
}
