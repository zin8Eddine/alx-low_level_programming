#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	short int num_one;
	short int num_two;

	num_one = 0;
	while (num_one < 10)
	{
		num_two = num_one + 1;
		while (num_two < 10)
		{
			putchar(num_one + '0');
			putchar(num_two + '0');
			if (num_one != 8)
			{
				putchar(',');
				putchar(' ');
			}
			num_two++;
		}
		num_one++;
	}
	putchar('\n');

	return (0);
}

