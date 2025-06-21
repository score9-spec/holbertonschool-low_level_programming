#include <stdio.h>

/**
* main - Entry point
*
* This program prints the first 98 Fibonacci numbers,
* starting with 1 and 2, separated by a comma and a space.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1, b = 2, next;
int i;

/* Print the first two Fibonacci numbers */
printf("%lu, %lu", a, b);

/* Generate and print the next 96 Fibonacci numbers */
for (i = 2; i < 98; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

printf("\n");

return (0);
}
