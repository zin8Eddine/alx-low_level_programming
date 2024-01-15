#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates n bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of str to concatenate
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, len_src, i;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	dest[len_dest] = '\0';

	return (dest);
}
