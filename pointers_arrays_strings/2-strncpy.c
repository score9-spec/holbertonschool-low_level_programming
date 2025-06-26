#include "main.h"

/**
* _strncat - Concat�ne deux chaines de caracteres 
* en limitant le nombre de caracteres de src
* @dest: la chaine de caract�res de destination
* @src: La chainde de caractere source 
* @n: Le nombre maximum de caracteres a copier de src
*
* Return: Un pointeur vers la chaine de caracteres 
* r�sultante dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* Trouver la fin de la chaine de caract�res dest */
while (dest[i] != '\0')
{
i++;
}

/* Copier les caracteres de src dans dest */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Ajouter le caractere de fin de chaine */
dest[i] = '\0';

return (dest);
}
