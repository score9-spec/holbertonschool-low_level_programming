#include "main.h"

/**
* _putchar - Écrit le caractère c sur la sortie standard
* @c: Caractère à imprimer
*
* Return: 1 en cas de succès, -1 en cas d'erreur
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
