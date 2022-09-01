#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: input head of dlistint list
 * Return: number of elements in a dlistint list
 *
 */
size_t dlistint_len(const dlistint_t *h);
{
	size_t count = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h ==  NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
