#include "main.h"

/**
 * print_alphabet
 * 
 * Return: alpahabet in lowerCase
 */
void print_alphabet(void)
{
        int c;

        for(c = 97; c <= 122; c++)
        {
                _putchar(c);
        }
        _putchar('\n');
}