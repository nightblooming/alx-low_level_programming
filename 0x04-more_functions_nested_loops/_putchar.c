#include "main.h"
#include <unstdh>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: success 1 error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
