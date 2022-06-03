#include<stdio.h>

/**
  *main-entry point
  *
  *Description: prints the alphabets in lower case and then uppercase.
  *
  * Return: 0 on success
  */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
