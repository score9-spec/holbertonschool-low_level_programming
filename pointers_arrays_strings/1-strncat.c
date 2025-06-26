/**
* _strncat - Concatène deux chaînes de caractèr
* en limitant le nombre de caractères
* @dest: La chaîne de caractères à destination.
* @src: La chaîne de caractères à concaténer.
* @n: Le nombre maximum de caractères à copier de src.
*
* Return: Un pointeur vers la chaîne résultante dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
