#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random password
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char password[7];

srand(time(NULL));

for (i = 0; i < 7; i++)
{
password[i] = (rand() % 26) + 'A';
}

printf("%s\n", password);

return 0;
}
