#include <stdio.h>

/**
 * main - Prints single digit numbers from 0 to 9
 *
 * Description: The program prints all single digit,
 * base 10 numbers starting from 0 using only the putchar
 * function, followed by a new line. It does not use any
 * variable of type char and only calls putchar twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');  /* Convert integer to corresponding character */
}
putchar('\n');  /* Print a newline character */

return (0);  /* Indicate successful execution */
}

