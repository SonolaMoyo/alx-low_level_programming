#include "lists.h"

/**
 * pop_listint - deletes the head node and returns head's data
 * @head: Pointer to head
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *aux_head = NULL;
	int aux_n = 0;

	if (*head == NULL)
		return (aux_n);

	aux_head = *head;

	aux_n = (*head)->n;
	*head = (*head)->next;

	free(aux_head);

	return (aux_n);
}
