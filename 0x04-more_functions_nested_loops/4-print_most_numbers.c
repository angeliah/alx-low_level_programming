#include "main.h"

/**
  *print_most_numbers - function that prints the numbers, 
  *from 0 to 9,except 2 and 4,followed by a new line
  *Return: always 0 on successs
  */
void print_most_numbers(void)
{
	int n;

	n = '0';

	if (n >= '0' && n <= '9')
	{
		while (n != '2' && n != '4')
		{
			_putchar (n);
		}
	}
	n++;
	_putchar ('\n');
}
