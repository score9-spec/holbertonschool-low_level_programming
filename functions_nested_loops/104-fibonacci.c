#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
*
* Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Numbers are separated by a comma followed by a space.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int fib1_low = 1;
unsigned long int fib2_low = 2;
unsigned long int fib1_high = 0;
unsigned long int fib2_high = 0;
int i;

printf("%lu, %lu, ", fib1_low, fib2_low);

for (i = 2; i < 98; i++)
{
unsigned long int next_low = fib1_low + fib2_low;
unsigned long int next_high = fib1_high + fib2_high + (next_low < fib1_low);

fib1_low = fib2_low;
fib2_low = next_low;
fib1_high = fib2_high;
fib2_high = next_high;

if (fib2_high == 0)
printf("%lu, ", fib2_low);
else
printf("%lu%010lu, ", fib2_high, fib2_low);
}

printf("\n");

return (0);
}
