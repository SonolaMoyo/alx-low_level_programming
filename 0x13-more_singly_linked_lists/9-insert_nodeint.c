#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: Double pointer to head
 * @idx: index of the list where the new node should be added
 * @n: Data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *aux_head = *head;
	listint_t *p_new_node = NULL;

	if (head == NULL)
		return (NULL);

	for (i = 0; aux_head != NULL; i++)
		aux_head = aux_head->next;
	if (idx > i)
		return (NULL);

	p_new_node = malloc(sizeof(listint_t));
	if (p_new_node == NULL)
		return (NULL);
	p_new_node->n = n;
	p_new_node->next = NULL;

	if (idx == 0)
	{
		p_new_node->next = *head;
		*head = p_new_node;
		return (p_new_node);
	}

	aux_head = *head;
	for (i = 0; i < idx - 1; i++)
		aux_head = aux_head->next;

	p_new_node->next = aux_head->next;
	aux_head->next = p_new_node;
	return (p_new_node);
}
