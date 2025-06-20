#ifndef MAIN_H
#define MAIN_H

/*
* File: main.h
* Desc: Header file containing prototypes for all functions
*       included in the Holberton School C programming project.
*/

#include <unistd.h>  /* Inclut write pour _putchar (même si _putchar est souvent dans main.h, write vient de unistd.h) */

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
#endif /* MAIN_H */
