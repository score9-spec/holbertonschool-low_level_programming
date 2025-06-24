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

#endif /* MAIN_H */
