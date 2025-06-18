#include <stdio.h>

/**
* main - Imprime l'alphabet en minuscules et en majuscules
*
* Return: Toujours 0 (Succès)
*/
int main(void)
{
int i;

/* Imprimer les lettres minuscules */
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}

/* Imprimer les lettres majuscules */
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}

/* Imprimer un saut de ligne à la fin */
putchar('\n');

return (0);
}

