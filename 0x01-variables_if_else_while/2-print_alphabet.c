#include <stdio.h>
/**
 * main - entry point
 * Description: 'print alphabets in lower case'
 * Return:always(0),(success)
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
