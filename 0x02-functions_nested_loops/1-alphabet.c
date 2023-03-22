#include "main.h"

/**
 * main - print alphabet in lowerCase
 * 
 * Return: 0 
 */
int main (void)
{
        print_alphabet();
        _putchar('\n');
        return (0);
}

void print_alphabet(void)
{
        int c;

        for(c = 97; c <= 122; c++)
        {
                _putchar(c)
        }
}