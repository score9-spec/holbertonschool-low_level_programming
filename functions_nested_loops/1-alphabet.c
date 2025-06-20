#include "main.h"

/**
* print_alphabet - prints the lowercase alphabet, followed by a new line
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n'); /* Ajoutez un saut de ligne a la fin */
}
