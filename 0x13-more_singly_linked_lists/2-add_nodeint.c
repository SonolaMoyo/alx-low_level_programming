#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of list
 * @n: Int to add
 * Return: New head position
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p_new_element = NULL;

	p_new_element = malloc(sizeof(listint_t));
	if (p_new_element == NULL)
		return (NULL);

	p_new_element->next = *head;
	p_new_element->n = n;

	*head = p_new_element;

	return (*head);
}
