#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
  *Main - evaluates random number and returns whether it
  * is a positive , negative or it is a zero.
  *Return: 0 on success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
