#include <stdio.h>

/**
 * main - print the alphabet letters exept e and q
 *
 * Return: Alaways (0)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
