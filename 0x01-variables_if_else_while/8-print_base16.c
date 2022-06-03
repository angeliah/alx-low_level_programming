#include<stdio.h>

/**
  *main - entry point
  *
  *Description: prints all the numbers of base 16 
  *in lower case.
  *
  *Return: 0 on success
  */
int main(void)
{

	int i = '0';

	while(i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}		
