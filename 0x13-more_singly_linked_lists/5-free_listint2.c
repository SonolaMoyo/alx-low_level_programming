#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head - Set as NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *aux_head = NULL;

	if (head == NULL)
		return;

	for (; head != NULL;)
	{
		aux_head = *head;
		*head = (*head)->next;
		free(aux_head);
	}
}
