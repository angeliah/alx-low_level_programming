#include<stdio.h>

/**
  *main - entry point
  *Description: prints all possible
  *different combinations of 3 numbers.
  *
  * Return: 0 on success
  */
int main(void)
{
	int i = '0';
	int k = '0';
	int j = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					 putchar(i);
					 putchar(j);
					 putchar(k);
					 if (!(i == '7' && j == '8' && k == '9'))
					 {
						 putchar(',');
						 putchar(' ');
				       	 }
                                }
				k++;
			}
		        k = '0';
		        j++;
	      }
              j = 'o';
	      i++;
	}
	putchar('\n');
	return (0);
}	
