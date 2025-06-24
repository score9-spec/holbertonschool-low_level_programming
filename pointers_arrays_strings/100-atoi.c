#include "main.h"

/**
* _atoi - convert a string to an integer
* @s: the input string
*
* Description:  
*   - Skip all characters until the first digit is found,
*     keeping track of each preceding '-' to determine sign.
*   - Once a digit is found, convert all consecutive digits
*     into an integer value.
*   - If no digits are ever found, return 0.
*   - Does not use long, does not declare arrays, no magic numbers.
*
* Return: the integer value represented by the string
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

/* 1) skip non-digit chars, flip sign on each '-' */
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;
/* ignore '+' */
i++;
}

/* 2) accumulate digits */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result * sign);
}
