#include <stdio.h>

/**
* main -Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0) /* Multiple de 3 et 5 */
{
printf("FizzBuzz");
}
else if (i % 3 == 0) /* Multiple de 3 */
{
printf("Fizz");
}
else if (i % 5 == 0) /* Multiple de 5 */
{
printf("Buzz");
}
else
{
printf("%d", i); /* Imprime le nombre */
}

if (i < 100) /* Espace apres chaque nombre ou mot, sauf le dernier */
{
printf(" ");
}
}
printf("\n"); /* Nouvelle ligne a la fin */
return (0); /* Indique que le programme s'est terminÃ©avec succÃs */
}
