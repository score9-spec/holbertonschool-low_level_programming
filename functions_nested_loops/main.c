#include "main.h"

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
