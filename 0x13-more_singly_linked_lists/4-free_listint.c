#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	do {
		temp = head->next;
		free(head);
		head = temp;
	} while (head != NULL);
}
