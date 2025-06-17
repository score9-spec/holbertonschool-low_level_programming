#include <stdio.h>

/**
 * main - Point d'entre du programme
 *
 * Description: Affiche la taille de divers types de donnes
 *
 * Return: 0 en cas d'excution russie
 */
int main(void)
{
    printf("Size of a char: %zu byte(s)\n", sizeof(char));
    printf("Size of an int: %zu byte(s)\n", sizeof(int));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of a float: %zu byte(s)\n", sizeof(float));

    return 0;
}
