#include "main.h"

/**
  *print_alphabet_x10 - function that prints alphabet in
  *lower case times 10 followed by a new line
  *
  * *Return: Always 0(sucess)
  */
void print_alphabet_x10(void)
{
	char j;
	int n;

	for (n = 0; n < 10;)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	n++;
	_putchar('\n');
	}
}

