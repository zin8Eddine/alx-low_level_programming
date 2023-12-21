#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int num1;
	int num2;
	int result;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			result = num1 * num2;
			if (result > 9)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((result) + '0');
			}
			if (num2 != 9)
			{
				_putchar(',');
			}
			num2++;
		}
		num1++;
		_putchar('\n');
	}
}
