#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int i, index, ele;
	char *a, aux;

	a = s;

	while (s[index] != '\0')
		index++;

	for (ele = 1; ele < index; ele++)
		a++;
	for (i = 0; i < (ele / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
	_putchar('\n');
}
