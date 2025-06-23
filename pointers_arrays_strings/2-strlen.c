/**
 * _strlen - returns the length of a string
 * @s: string to count
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
