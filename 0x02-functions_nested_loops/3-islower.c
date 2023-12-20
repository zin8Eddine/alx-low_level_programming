#include "main.h"
#include <ctype.h>

/**
 *  _islower - check if the letter is lower case
 *  @c: the letter to be Check
 *
 *  Return: 1 if lowerCase. 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
