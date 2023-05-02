#include "lists.h"

/**
 * add_nodeint_end - add new node at the end linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in new element
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *temp;

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    for (; temp->next != NULL; temp = temp->next)
        ;

    temp->next = new_node;

    return (new_node);
}
