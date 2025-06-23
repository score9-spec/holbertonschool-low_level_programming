#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
* Return: void
*/
void print_diagonal(int n)
{
int i;
int j;  /* Déclare j ici*/

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');  /* Imprime des espaces pour l'effet diagonal */
}
_putchar('\\');  /* Imprime le caractère diagona */
_putchar('\n');  /* Passe à la ligne suivante */
}
}
}
