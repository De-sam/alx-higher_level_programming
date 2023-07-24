#include "main.h"

/**
 *swap_int - swaps the value of two integers
 *
 *@a: is the first integer
 *@b: is the second integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
