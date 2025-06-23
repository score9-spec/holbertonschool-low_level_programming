#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Description: prints numbers 0 to 14, ten times,
* each line followed by \n
* Return: void
*/
void more_numbers(void)
{
int line, num;

for (line = 0; line < 10; line++)
{
for (num = 0; num <= 14; num++)
{
if (num >= 10)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
