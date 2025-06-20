#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Imprime tous les nombres naturels de n à 98
* @n: Le nombre de départ
*
* Return: Rien
*/
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
}
