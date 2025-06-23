#include "main.h"
#include <limits.h>

/**
* print_number - Imprime un entier.
* @n: L'entier à imprimer.
*
* Return: void
*/
void print_number(int n)
{
unsigned int m;

if (n == INT_MIN)
{
_putchar('-');
_putchar('2');
n = 147483648;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
m = n;
if (m / 10)
print_number(m / 10);
_putchar(m % 10 + '0');
}
