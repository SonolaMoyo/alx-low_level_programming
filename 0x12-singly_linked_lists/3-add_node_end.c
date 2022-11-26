#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer to head element
 * @str: pointer to string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *obj = NULL;
	list_t *aux2 = NULL;

	obj = malloc(sizeof(list_t));
	if (obj == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	obj->str = strdup(str);
	obj->next = NULL;
	obj->len = i;

	if (*head == NULL)
		*head = obj;
	else
	{
		aux2 = *head;

		while (aux2->next != NULL)
			aux2 = aux2->next;

		aux2->next = obj;
	}

	return (obj);
}
