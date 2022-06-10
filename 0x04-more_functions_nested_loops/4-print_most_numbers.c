#include "main.h"

/**
  *print_most_numbers - function that prints the numbers, 
  *from 0 to 9,except 2 and 4,followed by a new line
  *Return: always 0 on successs
  */
void print_most_numbers(void)
{
	int n;


	for (n = '0'; n <= '9'; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar (n);
		}
	}
	_putchar ('\n');
}
