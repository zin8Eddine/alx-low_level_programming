#include <stdio.h>

/**
 * main - prints program that prints all the numbers of base 16 in lowercase
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	short int num;

	num = 0;
	while (num < 16)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar('a' + (num - 10));
		}
		num++;
	}

	putchar('\n');

	return (0);
}
