#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int len = 0; index;

	while (s[index] != '\0')
		len++;

	for (len = index - 1; index >= 0 ; index--)
		_putchar (s[index]);
	
	_putchar('\n');
}
