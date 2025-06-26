#include "main.h"
#include <string.h>

/**
* _strncpy - Copies a string up to n bytes from src to dest.
* @dest: The destination buffer where the string is copied.
* @src: The source string to copy.
* @n: The maximum number of bytes to copy from src.
*
* Return: A pointer to the destination string (dest).
*/
char *_strncpy(char *dest, const char *src, int n)
{
size_t i; /* Change ici pour utiliser size_t */

for (i = 0; i < (size_t)n; i++)
{
if (i < strlen(src)) /* Vérifie que l'indice est valide pour src */
{
dest[i] = src[i]; /* Copie caractère src dans dest */
}
else
{
dest[i] = '\0'; /* Remplis le reste de dest avec des null */
}
}

return dest; /* Retourne le pointeur vers dest */
}
