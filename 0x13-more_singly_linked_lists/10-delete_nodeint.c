#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: Double pointer to head
 * @index: Index were to delete node
 * Return: 1 succeed - 0 Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *aux_head = *head;
	listint_t *aux2 = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; aux_head != NULL; i++)
		aux_head = aux_head->next;
	if (index > i)
		return (-1);

	aux_head = *head;
	if (index == 0)
	{
		*head = aux_head->next;
		free(aux_head);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		aux_head = aux_head->next;

	aux2 = aux_head->next;
	aux_head->next = aux_head->next->next;
	free(aux2);
	return (1);
}
