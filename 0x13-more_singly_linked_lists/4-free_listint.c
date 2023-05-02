#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	do {
		temp = head;
		head = head->next;
		free(temp);
	} while (head != NULL);
}
