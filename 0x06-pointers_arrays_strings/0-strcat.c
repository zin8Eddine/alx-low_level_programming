#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	len_src = 0;
	while (src[len_src] != '\0')
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}

	return (dest);
}
