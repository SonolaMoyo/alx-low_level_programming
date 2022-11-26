#include "lists.h"

/**
 * free_list - rees a list_t list
 * @head: list to free
 */

void free_list(list_t *head)
{
	list_t *aux = head;

	while (aux != NULL)
	{
		head = aux;
		free(head->str);
		free(head);
		aux = aux->next;
	}
}
