#include<stdio.h>

/**
  *Main - entry point
  *
  * Description: prints alphabets in lower case except q and e
  *
  * Return: 0 on success
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
