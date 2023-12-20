#include "main.h"

/**
 *  print_alphabet - print all the alphabet letter in lower case
 *
 *  Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
