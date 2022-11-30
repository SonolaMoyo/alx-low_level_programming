#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: list to be free
 * Return:  size of the list that was free
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux_head = NULL;
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; *h != NULL; i++)
	{

		if (*h - (*h)->next > 0)
		{
			aux_head = *h;
			*h = (*h)->next;
			free(aux_head);
		}
		else
		{
			free(*h);
			*h = NULL;
			i = i + 1;
			break;
		}
	}

		return (i);
}
