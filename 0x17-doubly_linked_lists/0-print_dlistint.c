#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: input head of dlitint list
 * Return: number  of nodes printed
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
