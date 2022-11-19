#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the first element of the current list
 * @n: int to be stored in the node being added
 * Return: a pointer to the new node at the start of the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (head->next != NULL)
	{
		*head = head->next;
	}

	new_node->n = (int)n;
	new_node->next = NULL;

	return (new_node);
}
