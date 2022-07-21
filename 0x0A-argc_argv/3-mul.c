#include "main.h"
#include<stdio.h>

/**
 * main -program that multiplies two numbers
 * @argc: number of arguments passed to main
 * @argv: argumets passed to main as an array of strins
 * Retun: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

		if (argv[1] && argv[2])
		{
			printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
			return (0);
		}
		else
		printf("Error\n");
		return (1);
}
