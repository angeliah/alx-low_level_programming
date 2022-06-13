#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array whose elements are to be printed
 * @n: elements of the array
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
	printf("%d", a[index]);
	if (index == n - 1)
		continue;
	printf(", ");
	}
	printf("\n");
}
