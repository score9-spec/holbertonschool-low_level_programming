#include "main.h"

/**
* _strcat - Concat√ne deux chaines de caracteres.
* @dest: La chaine de caracteres a destination.
* @src: La chaine de caract√res a concatener.
*
* Return: Un pointeur vers la chaine r√sultante.
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

/* trouver la fin de la chaine dest */
while (dest[i] != '\0')
{
i++;
}

/* Concat√ner src a la fin de dest */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Ajouter un caract√re null a la fin */
dest[i] = '\0';
return (dest);
}
