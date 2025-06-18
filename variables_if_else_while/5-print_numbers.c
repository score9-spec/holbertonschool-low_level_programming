#include <stdio.h>

/**
* main - Prints single digit numbers from 0 to 9.
* Return: Always 0 (Success)
*/
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar ('\n');

return (0);
}
