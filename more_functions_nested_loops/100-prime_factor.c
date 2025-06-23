#include <stdio.h>

/**
* main - trouve et imprime 
* le plus grand facteur premier du nombre 612852475143
* 
* Return: Always 0 (Succ√s)
*/
int main(void)
{
long num = 612852475143;
long i;

for (i = 2; i * i <= num; i++)
{
while (num % i ==0)
{
num /= i;
}
}
printf("%ld\n", num);
return (0);
}
