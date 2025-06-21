#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms in the Fibonacci sequence
*        whose values do not exceed 4,000,000
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
unsigned long int sum = 0;
unsigned long int next;

while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;
next = a + b;
a = b;
b = next;
}

printf("%lu\n", sum);

return (0);
}
