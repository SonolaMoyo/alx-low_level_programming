#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: list_t to be counted
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
