#include "main.h"

/**
* _isupper - verifie si un caractere est en majuscule
* @c: le caractere a verifier
* Return: 1 si c est en majuscule, 0 sinon
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
