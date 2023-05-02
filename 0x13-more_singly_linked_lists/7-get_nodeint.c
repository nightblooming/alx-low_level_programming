#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node in the linked list
 * @index: index of the node to  be returned
 * Return: pointer to the node , or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; temp && i < index; i++)
	{
		temp = temp->next;
	}
	return (temp ? temp : NULL);
}
