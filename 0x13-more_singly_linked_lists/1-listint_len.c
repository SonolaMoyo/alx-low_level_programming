#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: list to be counted
 * Return: Number of elements the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
