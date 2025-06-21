#include "main.h"
void format_print(int prod, int first);
/**
* format_print - formats and prints number with spacing
* @prod: product to print
* @first: 1 if first in row, 0 otherwise
*/
void format_print(int prod, int first)
{
if (first)
_putchar('0' + prod);
else
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
_putchar(' ');
_putchar('0' + prod);
}
else if (prod < 100)
{
_putchar(' ');
_putchar('0' + (prod / 10));
_putchar('0' + (prod % 10));
}
else
{
_putchar('0' + (prod / 100));
_putchar('0' + ((prod / 10) % 10));
_putchar('0' + (prod % 10));
}
}
}
