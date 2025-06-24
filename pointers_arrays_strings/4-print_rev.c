#include "main.h"

/**
* print_rev - Prints a string in reverse followed by a new line.
* @s: The string to be printed in reverse.
*/
void print_rev(char *s)
{
int length = 0;
char *ptr = s;

/* Calculer la longeur de la chaine */
while (*ptr != '\0')
{
length++;
ptr++;
}

/* R�intialiser ptr au d�but de la chaine pour un acc�s facile */
ptr = s;

/*
* It�rer sur la longeur de la chaine en sens inverse et imprimer
* chaque caractere.
*/

for (length -= 1; length >= 0; length--)
{
_putchar(*(ptr + length));
}

/* Imprimer un saut de ligne */
_putchar('\n');
}
