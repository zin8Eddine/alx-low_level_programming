#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int max_iterations;

	num1 = 0;
	while (num1 < 3)
	{
		num2 = 0;
		max_iterations = num1 == 2 ? 5 : 10;
		while (num2 < max_iterations)
		{
			num3 = 0;
			while (num3 < 6)
			{
				num4 = 0;
				while (num4 < 10)
				{
					_putchar(num1 + '0');
					_putchar(num2 + '0');
					_putchar(':');
					_putchar(num3 + '0');
					_putchar(num4 + '0');
					_putchar('\n');
					num4++;
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
