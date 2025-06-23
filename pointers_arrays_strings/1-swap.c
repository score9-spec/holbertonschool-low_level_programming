#include "main.h"

/**
* swap_int - Ãchange les valeurs de deux entiers
* @a: pointeur vers un int
* @b: pointeur vers un int
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
