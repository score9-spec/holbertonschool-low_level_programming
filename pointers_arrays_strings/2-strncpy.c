#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strncat - function that concatenates two strings
* @dest: destination string
* @src: source string
* @n: number of bytes to append
*
* Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;

/* Find the end of dest */
for (i = 0; dest[i] != '\0'; i++)
        ;

/* Append up to n characters from src */
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0'; /* Null terminate the resulting string */

return dest;
}
