#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a : the fist pointer
 * @b : the secound pointer
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
