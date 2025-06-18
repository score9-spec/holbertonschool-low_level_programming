#include <stdio.h>

/**
* main - Prints all possible combinations of single-digit numbers.
*
* Return: Always 0 (Success).
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');  /* Convertit l'entier en caractère */

if (i < 9)  /* Évite d'ajouter une virgule après le dernier chiffre */
{
putchar(',');  /* Affiche la virgule */
putchar(' ');  /* Affiche l'espace */
}
}
putchar('\n');  /* Termine par un retour à la ligne */

return (0);  /* Retourne 0 pour indiquer le succès */
}

