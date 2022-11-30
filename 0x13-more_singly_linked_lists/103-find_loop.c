#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head
 * Return: The address of the node where the loop starts
 * NULL if there is not loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	for (; head != NULL && head->next != NULL;)
	{
		if ((head - head->next) > 0)
			head = head->next;
		else
		{
			return (head);
		}
	}
	return (NULL);
}
