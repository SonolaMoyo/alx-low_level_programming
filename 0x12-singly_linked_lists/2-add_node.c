#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to head element
 * @str: pointer to string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *aux = NULL;

	aux = malloc(sizeof(list_t));
	if (aux == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	aux->str = strdup(str);
	aux->next = *head;
	aux->len = i;

	*head = aux;

	return (*head);
}
