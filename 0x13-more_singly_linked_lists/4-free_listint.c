#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *aux_head = NULL;

	for (; head != NULL;)
	{
		aux_head = head;
		head = head->next;
		free(aux_head);
	}
}
