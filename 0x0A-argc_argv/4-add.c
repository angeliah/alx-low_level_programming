#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argv: arguments passed to main
 * @argc: number of argumnets passed to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, total = 0;
	char *p;
	int num;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
