#include "main.h"
/**
* string_toupper - change lowercase letters to uppercase.
* @str: analized string.
*
* Return: String with all letters Uppercased.
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
