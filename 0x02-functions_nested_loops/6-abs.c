#include "main.h"

/**
 * _abs - return the absolute value of an integer
 * @num: the number to be converted
 *
 * Return: always number
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	return (num);
}
