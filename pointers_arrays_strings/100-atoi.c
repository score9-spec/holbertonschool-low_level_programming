#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: the string to convert
*
* Return: the integer converted from the string
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;

while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (result > (2147483647 - (s[i] - '0')) / 10)
{
if (sign == 1)
return (2147483647);
else
return (-2147483648);
}
result = result * 10 + (s[i] - '0');
i++;
}

return (result * sign);
}
