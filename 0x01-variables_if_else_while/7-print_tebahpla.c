#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
