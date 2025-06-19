#include <unistd.h>

/**
* main - Programme principal
*
* Description: Imprime "_putchar" suivi d'une nouvelle ligne.
* Return: 0 en cas de succès
*/
int main(void)
{
char *s = "_putchar\n";

while (*s)
{
_putchar(*s);
s++;
}
return (0);
}

/**
* _putchar - Écrit le caractère c sur la sortie standar
* @c: Caractère à imprime
*
* Return: 1 en cas de succès, -1 en cas d'erreur
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
