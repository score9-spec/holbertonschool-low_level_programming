#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int aLow = 1, aHigh = 0;
unsigned long int bLow = 2, bHigh = 0;
unsigned long int nextLow, nextHigh;
int i;

printf("%lu, %lu, ", aLow, bLow);

for (i = 2; i < 98; i++)
{
nextLow = aLow + bLow;
nextHigh = aHigh + bHigh + (nextLow < aLow);
printf("%lu", nextHigh * 1000000000 + nextLow);
if (i != 97)
printf(", ");
aLow = bLow;
aHigh = bHigh;
bLow = nextLow;
bHigh = nextHigh;
}

printf("\n");

return (0);
}
