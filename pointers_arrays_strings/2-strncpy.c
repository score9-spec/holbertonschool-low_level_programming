#include "main.h"

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
int i;

for (i = 0; i < n; i++)
{
if (src[i] != '\0')
{
dest[i] = src[i];
}
else
{
/* Si src se termine, remplis le reste avec des chaînes null*/
while (i < n) 
{
dest[i] = '\0';
i++;
}
break;
}
}

/* Si src a moins de n caractères, assure que dest est null-terminé*/
if (i == n)
{
dest[n - 1] = '\0'; /* Assurer la terminaison correcte */
}
    
return dest;
}
