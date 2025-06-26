#include "main.h"

/**
* _strcat - Concatène deux chaines de caracteres.
* @dest: La chaine de caracteres a destination.
* @src: La chaine de caracteres a concatener.
*
* Return: Un pointeur vers la chaine résultante.
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
