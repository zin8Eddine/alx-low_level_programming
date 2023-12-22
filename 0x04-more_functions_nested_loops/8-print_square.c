#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size:  the size of the square each square == #
 */
void print_square(int size)
{
	int i;
	int square;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (square = 0; square  < size; square++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
