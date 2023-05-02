#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h:  pointer to linked list of type listint_t
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++, h = h->next)
	{
		printf("%d\n", h->n);
	}

	return (num);
}
