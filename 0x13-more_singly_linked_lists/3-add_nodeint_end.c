#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of list
 * @n: Int to add
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p_new_element = NULL;
	listint_t *aux_head = NULL;
	size_t i;

	p_new_element = malloc(sizeof(listint_t));
	if (p_new_element == NULL)
		return (NULL);

	p_new_element->n = n;
	p_new_element->next = NULL;

	aux_head = *head;

	if (aux_head == NULL)
		*head = p_new_element;
	else
	{
		for (i = 0; aux_head->next != NULL; i++)
		{
			aux_head = aux_head->next;
		}

		aux_head->next = p_new_element;
	}

	return (p_new_element);
}
