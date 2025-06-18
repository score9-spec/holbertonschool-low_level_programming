	#include <stdio.h>
	
	/**
	* main - Entry point of the program
	*
	* Description: Prints the alphabet in lowercase, excluding 'e' and 'q',
	*			  followby a new line.
	*
	*Return: Always 0 (Success)
	*/
	int main(void)
	{
		char c = 'a';
	
		while (c <= 'z')
		{
			if (c != 'e' && c != 'q')
				putchar(c);
			   c++;
			}
				putchar('\n');
			return (0);
	}
