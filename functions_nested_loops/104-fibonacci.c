#include <stdio.h>

/**
* print_fibonacci - Imprime les 98 premiers nombres de Fibonacci.
*/
void print_fibonacci(void)
{
unsigned int a_low = 1;
unsigned int b_low = 2;
unsigned int temp_low;
unsigned int a_high = 0;
unsigned int b_high = 0;
unsigned int temp_high;
int i;

printf("%u, %u, ", a_low, b_low);
for (i = 2; i < 98; i++)
{
temp_low = a_low + b_low;
temp_high = a_high + b_high + (temp_low < a_low);
a_low = b_low;
a_high = b_high;
b_low = temp_low;
b_high = temp_high;

if (b_high == 0)
printf("%u, ", b_low);
else
printf("%u%09u, ", b_high, b_low);
}
printf("\n");
}

/**
* main - Fonction principale.
*
* Return: Toujours 0.
 */
int main(void)
{
print_fibonacci();
return (0);
}
