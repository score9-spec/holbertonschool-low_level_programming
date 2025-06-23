#include "main.h"

/**
* print_triangle - Prints a triangle of a given size.
* @size: The size of th triangle.
*/
void print_triangle(int size)
{
int row, space, hash;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (space = size - row; space > 0; space--)
{
_putchar(' '); /* Imprime les espaces */
}

for (hash = 1; hash <= row; hash++)
{
_putchar('#'); /* Imprime les caracteres */
}

_putchar('\n'); /* Nouvelle ligne apres chaque rangÃe */
}
}
