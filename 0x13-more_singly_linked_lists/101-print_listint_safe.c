#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: list to be printed
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	for (i = 0; head != NULL; i++)
	{

		printf("[%p] %d\n", (void *)head, head->n);
		if (head - head->next > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			i = i + 1;
			break;
		}
	}

	return (i);
}
