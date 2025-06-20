#include "main.h"

/**
* times_table - Imprime la table de multiplication de 9
*/
void times_table(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int produit = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
if (produit < 10)
{
_putchar(' ');
}
}
if (produit >= 10)
{
_putchar((produit / 10) + '0');
}
_putchar((produit % 10) + '0');
}
_putchar('\n');
}
}
