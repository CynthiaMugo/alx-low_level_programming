#include "lists.h"

/**
 * insert_nodeint_at_index -> inserts a new node at a given position
 * @head: pointer to the head of tghe linked list
 * @idx: index of the list wher the new node
 * will; be added
 * @n: value of the new node to be added
 * Return: the address of the new node, or NULL if it failed
 * add the new node at index idx, do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
