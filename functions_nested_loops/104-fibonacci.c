#include <stdio.h>
#define MAXDIGITS 1000
/**
* add - adds the numbers of two given arrays of integer
* @a: an arrays containing differents digit of a number
* @b: an array containing different digit of a number
* @result: the returned value
*
* Return: void
*/
void add(int a[], int b[], int result[])
{
int carry = 0;
int i;
for (i = 0; i < MAXDIGITS; i++)
{
int sum = a[i] + b[i] + carry;
result[i] = sum % 10;
carry = sum / 10;
}
}
/**
* printNumber - print the given number
* @number: a given array of numbers to be printed
*
* Return: void
*/
void printNumber(int number[])
{
int i = MAXDIGITS - 1;
while (i >= 0 && number[i] == 0)
{
i--;
}
if (i == -1)
{
printf("0");
}
else
{
for (; i >= 0; i--)
{
printf("%d", number[i]);
}
}
}
/**
* main - prints the first 98 fibonnachi numbers
*
* Return: always zero
*/
int main(void)
{
int a[MAXDIGITS] = {0};
int b[MAXDIGITS] = {1};
int c[MAXDIGITS] = {0};
int i;
for (i = 1; i < 98; i++)
{
int j;
add(a, b, c);
printNumber(c);
printf(", ");
/* Update a and b for the next iteration */
for (j = 0; j < MAXDIGITS; j++)
{
a[j] = b[j];
b[j] = c[j];
}
}
add(a, b, c);
printNumber(c);
printf("\n");
return (0);
}
