#include "main.h"

/**
  *print_numbers -function that prints the numbers, from 0 to 9,
  *followed by a new line
  *
  * Return: always 0 (success)
  */
void print_numbers(void)
{
	int n;

	n = '0';

	if (n >= 0 && n <= 9)
	{
		_putchar (n);
	}
	n++;
	_putchar ('\n');
}
