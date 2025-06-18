#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints the alphabet in lowercase, excluding 'e' and 'q',
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');

return (0);
}
