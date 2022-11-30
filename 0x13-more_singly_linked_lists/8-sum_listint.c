#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: Pointer to head
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
