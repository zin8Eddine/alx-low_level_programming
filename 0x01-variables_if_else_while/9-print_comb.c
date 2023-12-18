#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	short int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}

	putchar('\n');

	return (0);
}
