#include "main.h"

/**
* _atoi - convertit une chaîne en entier
* @s: chaîne d’entrée
*
* Description:
*   - Parcourt tous les caractères jusqu’au premier chiffre
*     (flip du signe à chaque '-' rencontré).
*   - Accumule ensuite chaque caractère chiffre en appliquant
*     immédiatement le signe pour éviter l’overflow sur INT_MIN.
*   - Si aucun chiffre n’est rencontré, renvoie 0.
*
* Return: valeur entière convertie
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

/* 1) skippage jusqu’au premier digit, flip sign sur '-' */
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;
i++;
}

/* 2) accumulation chiffre par chiffre */
while (s[i] >= '0' && s[i] <= '9')
{
if (sign == 1)
result = result * 10 + (s[i] - '0');
else
result = result * 10 - (s[i] - '0');
i++;
}

return (result);
}
