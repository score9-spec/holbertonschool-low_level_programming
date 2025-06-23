#include "main.h"
#include <limits.h> /* Inclure limits.h pour utiliser INT_MIN */

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
if (n == INT_MIN)
{
_putchar('2');
n = -(n + 2);
}
else
{
n = -n;
}
}
if (n / 10 != 0)
{
print_number(n / 10);
}
_putchar(n % 10 + '0');
}
