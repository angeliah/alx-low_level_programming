#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s:string to be reversed
 */
void rev_string(char *s)
{
	int len = 0; index = 0; 
	char tmp;

	while (s[index] != '\0')
		len++;

	for (len = index - 1; index >= len / 2 ; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	
	_putchar('\n');
}
