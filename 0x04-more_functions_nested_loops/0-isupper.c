#include "main.h"
/**
 * _isupper - checks whether the character is upper case
 * @c: character to be checked
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
