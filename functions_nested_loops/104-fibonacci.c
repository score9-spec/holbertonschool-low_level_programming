#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int first = 1;
unsigned long int second = 2;
unsigned long int next;
int count;

/* Print the first number */
printf("%lu", first);

/* Print the rest of the numbers up to 98 */
for (count = 1; count < 98; count++)
{
printf(", %lu", second);
next = first + second;
first = second;
second = next;

/* Handle potential overflow by breaking if number is too large */
if (second < first)
break;
}
printf("\n");
return (0);
}
