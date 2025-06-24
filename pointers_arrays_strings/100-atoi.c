#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: the input string
*
* Description:
*   - Parcourt tous les caractères jusqu’au premier chiffre.
*   - Inverse le signe à chaque '-' rencontré.
*   - Une fois un chiffre trouvé, accumule la valeur en
*     tenant compte du signe à chaque itération.
*   - Si aucun chiffre n’est trouvé, renvoie 0.
*
* Return: la valeur entière
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

/* 1) Parcours jusqu’à la première occurrence de '0'..'9', track '-' */
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;
/* on ignore '+' */
i++;
}

/* 2) Accumulation chiffre par chiffre, on applique le signe immédiatement */
while (s[i] >= '0' && s[i] <= '9')
{
if (sign > 0)
result = result * 10 + (s[i] - '0');
else
result = result * 10 - (s[i] - '0');
i++;
}

return result;
}
