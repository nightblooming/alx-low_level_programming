#include "main.h"
/**
 * _strlen - gives length of the string
 * @s: string to be counted
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
