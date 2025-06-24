#include "main.h"

/**
* rev_string - inverse une chaîne de caractères
* @s: la chaîne de caractères à inverser
*/
void rev_string(char *s)
{
int longueur = 0;
int i;
char temp;

/* Déterminez la longueur de la chaîne de caractères */
while (s[longueur] != '\0')
longueur++;

/* Échangez les caractères de la chaîne de caractères */
for (i = 0; i < longueur / 2; i++)
{
temp = s[i];
s[i] = s[longueur - i - 1];
s[longueur - i - 1] = temp;
}
}
