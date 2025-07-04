#ifndef MAIN_H
#define MAIN_H

/**
* reset_to_98 - remet un entier à 98
* @n: pointeur vers un int
*
* Return: void
*/
void reset_to_98(int *n);

/**
* swap_int - échange les valeurs de deux entiers
* @a: pointeur vers un int
* @b: pointeur vers un int
*
* Return: void
*/
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str);

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * rev_string - inverse une chaîne de caractères
 * @s: la chaîne de caractères à inverser
 *
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: the string to be printed
 *
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to be printed
 * @n: the number of elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s);

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string to be concatenated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - Concatène deux chaînes de caractères en limitant le nombre de caractères à copier de la deuxième chaîne.
 * @dest: La chaîne de caractères à destination.
 * @src: La chaîne de caractères à concaténer.
 * @n: Le nombre maximum de caractères à copier de src.
 *
 * Return: Un pointeur vers la chaîne résultante dest.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - Copie une chaîne de caractères.
 * @dest: La chaîne de destination.
 * @src: La chaîne source.
 * @n: Le nombre de caractères à copier.
 *
 * Return: Un pointeur vers la chaîne de destination.
 */
char *_strncpy(char *dest, const char *src, int n);

/**
 * _strcmp - compares two strings.
 * @s1: the first string to be compared.
 * @s2: the second string to be compared.
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2);

#endif /* MAIN_H */
