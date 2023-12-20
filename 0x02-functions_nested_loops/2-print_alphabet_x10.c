#include "main.h"
#include "1-alphabet.c"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet,
 *  in lowercase, followed by a new line
 *
 *  Return: void
 */
void print_alphabet_x10(void)
{
	short int num;

	num = 0;
	while (num < 10)
	{
		print_alphabet();
		_putchar('\n');
		num++;
	}
	_putchar('\n');
}
