#include "main.h"
#include <ctype.h>

/**
 *  _isalpha - check if the letter is alphabet
 *  @c: the letter to be Check
 *
 *  Return: 1 if alphabet. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
