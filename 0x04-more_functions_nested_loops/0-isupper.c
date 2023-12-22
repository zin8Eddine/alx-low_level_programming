#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if the given letter is upperCase
 * @c: the parameter to be check
 *
 * Return: 1 if upperCase.otherwise 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
