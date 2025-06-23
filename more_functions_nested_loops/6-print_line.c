#include "main.h"
#include <stdio.h>

/**
* print_line - prints a straight line in the terminal
* @n: number of times the character _ should be printed
* Return: void
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
}
