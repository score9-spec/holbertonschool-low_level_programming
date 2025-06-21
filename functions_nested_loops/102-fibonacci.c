#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
int i;

printf("%lu, %lu, ", a, b);

for (i = 2; i < 50; i++)
{
unsigned long int next = a + b;

if (i == 49)
printf("%lu\n", next);
else
printf("%lu, ", next);
a = b;
b = next;
}

return (0);
}
