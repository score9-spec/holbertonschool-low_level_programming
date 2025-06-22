#include <stdio.h>

/**
* print_fibonacci - Prints the first 98 Fibonacci numbers.
*
* Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2.
* The numbers are separated by a comma followed by a space.
*/
void print_fibonacci(void)
{
unsigned int fib1_low = 1;
unsigned int fib2_low = 2;
unsigned int fib1_high = 0;
unsigned int fib2_high = 0;
unsigned int next_fib_low;
unsigned int next_fib_high;
int i;

printf("%u, %u, ", fib1_low, fib2_low);

for (i = 2; i < 98; i++)
{
next_fib_low = fib1_low + fib2_low;
next_fib_high = fib1_high + fib2_high + (next_fib_low < fib1_low);

if (i != 97)
{
if (next_fib_high == 0)
printf("%u, ", next_fib_low);
else
printf("%u%09u, ", next_fib_high, next_fib_low);
}
else
{
if (next_fib_high == 0)
printf("%u\n", next_fib_low);
else
printf("%u%09u\n", next_fib_high, next_fib_low);
}

fib1_low = fib2_low;
fib1_high = fib2_high;
fib2_low = next_fib_low;
fib2_high = next_fib_high;
}
}

/**
* main - Entry point of the program.
*
* Return: Always 0.
*/
int main(void)
{
print_fibonacci();
return (0);
}
