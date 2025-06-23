#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: size of the square
*
* Return: void
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n'); /* Si la taille est 0 ou moins, imprime un saut de ligne */
}
else
{
for (i = 0; i < size; i++) /* Pour chaque ligne */
{
for (j = 0; j < size; j++) /* Pour chaque colonne */
{
_putchar('#'); /* Affiche le caractère #'  */
}
_putchar('\n'); /* Après chaque ligne, pass a la ligne suivante */
}
}
}
