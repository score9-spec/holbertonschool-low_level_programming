#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a1 = 1;
unsigned long int a2 = 0;
unsigned long int b1 = 2;
unsigned long int b2 = 0;
int i;

printf("%lu, %lu, ", a1, b1);

for (i = 2; i < 98; i++)
{
unsigned long int next1 = a1 + b1;
unsigned long int next2 = a2 + b2 + (next1 < a1);

if (next2)
printf("%lu%09lu", next2, next1);
else
printf("%lu", next1);

if (i != 97)
printf(", ");

a1 = b1;
a2 = b2;
b1 = next1;
b2 = next2;
}

printf("\n");

return (0);
}
