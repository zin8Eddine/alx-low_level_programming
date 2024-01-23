#include "main.h"

/**
* string_toupper - Change lowercase letters to uppercase.
* @str: Analized string.
*
* Return: String with all letters uppercase.
*/
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}

	return (str);
}
