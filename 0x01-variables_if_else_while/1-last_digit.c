#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */
/**
  * Main-Assigns a random number to a
  *variable,prints the last digit of the variable and 
  *determines if the last digit is greate than 5,
  *is equal to 5 or is zero..
  *Return value -Always 0 on success
  */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Your code goes there*/
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
