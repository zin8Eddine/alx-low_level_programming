#include <stdio.h>

/**
 * main - prints the alphabets [a-z][A-Z]
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}

	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
