#include "main.h"
#include <ctype.h>

/**
 *  print_sign - check if the number is sign
 *  @n: the number to be Check
 *
 *  Return: 1 if alphabet. 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
_putchar('0');
return (0);
}
