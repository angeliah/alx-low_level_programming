#include "main.h"

/**
  *print_alphabet - function that prints abc
  *
  * Return: Always 0(success)
  */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
