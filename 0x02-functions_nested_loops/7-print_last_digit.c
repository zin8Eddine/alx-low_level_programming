#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to be coverted
 *
 * Return:  the value of the last digit
 */
int print_last_digit(int num)
{
	num = _abs(num);
	_putchar((num % 10) + '0');
	return ((num % 10));
}

