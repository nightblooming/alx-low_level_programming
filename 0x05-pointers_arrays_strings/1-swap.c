#include "main.h"
/**
 * swap_int - exchanges the value of the integers
 * @a: the first integer
 * @b: the second integer
 * Return: nothing
 */
int swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
