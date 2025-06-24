#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Generates a random valid password for 101-crackme
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
char password[7];

srand(time(NULL)); /* seed the random number generator */

/* Generate a random password */
password[0] = (rand() % 26) + 'A'; /* first character is an uppercase letter */
for (i = 1; i < 6; i++)
{
password[i] = (rand() % 62); /* generate a random character */
if (password[i] < 10) /* if it's a digit, add '0' */
password[i] += '0';
else if (password[i] < 36) /* if it's an uppercase letter, add 'A' - 10 */
password[i] += 'A' - 10;
else /* if it's a lowercase letter, add 'a' - 36 */
password[i] += 'a' - 36;
}
password[6] = '\0'; /* null-terminate the string */

printf("%s\n", password);

return (0);
}
