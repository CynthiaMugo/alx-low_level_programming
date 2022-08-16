#include "lists.h"

/**
 * free_listint2 -> frees the linked list
 * @head: pointer to list
 * Return: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
