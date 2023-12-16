#include <stdio.h>

/**
 * main - prints  all single digit numbers of base 10 with putchar
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	unsigned short int i;

	i = 0;
	while (i < 11)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
