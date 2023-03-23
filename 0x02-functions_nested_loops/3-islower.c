#include "main.h"

/**
 * _islower - check the input is in lowerCase
 * @c the  value to ceck
 * 
 * Return: 1  if input in lower case else 0
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z') 
                return 1;
        
        else 
                return 0;
 
}
