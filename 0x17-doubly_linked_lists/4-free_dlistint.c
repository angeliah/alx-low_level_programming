#include "lists.h"

/**
 * free_dlistint- function that frees a dlistint_t list.
 * @head: pointer to head of dlistint_t list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *to_free;

	while (head != NULL)
	{
		to_free = head;
		head = head->next;
		free(to_free);
	}
}
