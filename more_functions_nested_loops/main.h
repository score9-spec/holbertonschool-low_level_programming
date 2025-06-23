#ifndef MAIN_H
#define MAIN_H

/**
* _isupper - vérifie si un caractère est en majuscule
* @c: le caractère à vérifier
* Return: 1 si c est en majuscule, 0 sinon
*/
int _isupper(int c);

/**
* _putchar - écrit un caractère sur la sortie standard
* @c: le caractère à écrire
* Return: le caractère écrit
*/
int _putchar(char c);

/**
* _isdigit - checks for a digit (0 through 9)
* @c: character to check
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c);

/**
* mul - multiplies two integers
* @a: first integer
* @b: second integer
* Return: result of multiplication
*/
int mul(int a, int b);

/**
* print_most_numbers - prints numbers 0 to 9 except 2 and 4
* Return: void
*/
void print_most_numbers(void);

#endif  /* MAIN_H */
