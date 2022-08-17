#include "lists.h"

/**
 * listint_len -> counts the no of nodes in a linked list
 * @h: head of the list
 * Return: the no of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
