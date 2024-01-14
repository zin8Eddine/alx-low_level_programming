#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length;
	int i;
	int half_n;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	half_n = (length + 1) / 2;
	for (i = half_n; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
