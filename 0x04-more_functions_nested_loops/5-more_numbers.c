#include "main.h"

/**
  *more_numbers - function that prints 10 times the numbers, from 0 to 14
  *
  *Return: always 0(success)
  */
void more_numbers(void)
{
	int i;
	int j;


	for (j = 0; j < 10; j++)
	{
	       for (i= 0; i <= 14; i++)
	       {
		       if (i >= 10)
		       {
			       _putchar((i / 10) + '0');
		       }
		       _putchar((i % 10) + '0');
	       }
	       _putchar('\n');
	}
}
