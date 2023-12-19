#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 *
 * Return: Always (0)
 */
int main(void)
{
	short int num;
	short int num2;
	short int num3;
	short int num4;

	num = 0;
	while (num < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num3 = num;
			while (num3 < 10)
			{
				num4 = num2 + 1;
				while (num4 < 10)
				{
					putchar(num + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					num4++;
					if (num != 9 || num2 != 8 || num4 != 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num++;
	}
	return (0);
}
