#include "lists.h"

/**
 * sum_listint ->  sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the linked list
 * Return: sum of n
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
