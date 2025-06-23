#ifndef MAIN_H
#define MAIN_H

/**
* _isupper - checks if character is uppercase
* @c: character to check
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c);

/**
* _putchar - writes a character to stdout
* @c: character to write
* Return: character written
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

/**
* more_numbers - prints 10 times the numbers from 0 to 14
* Return: void
*/
void more_numbers(void);

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_line(int n);

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void);

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
* Return: void
*/
void print_diagonal(int n);

#endif /* MAIN_H */
