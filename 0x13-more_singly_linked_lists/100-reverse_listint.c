#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: Double pointer to head
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux1 = *head;
	listint_t *aux2 = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (; (*head)->next != NULL;)
	{
		aux1 = aux1->next;
		(*head)->next = aux2;
		aux2 = *head;
		*head = aux1;
	}

	(*head)->next = aux2;

	return (*head);
}
