#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1;
unsigned long int b = 2;
int i;

printf("%lu, %lu, ", a, b);

for (i= 2; i < 98; i++)
{
unsigned long int next = a + b;
printf("%lu", next);
if (i != 97)
printf(", ");
a = b;
b = next;
}

printf("\n");

return (0);
}
