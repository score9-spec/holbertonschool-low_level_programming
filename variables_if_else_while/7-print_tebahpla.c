#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse
*
* Description: This function prints the lowercase letters of the
* alphabet in reverse order, from 'z' to 'a', followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');

return (0);
}

