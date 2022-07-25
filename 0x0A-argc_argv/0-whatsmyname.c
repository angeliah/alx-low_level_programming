#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 *@argv: arguments passed to main as an aaray of strings
 *@argc: argument count
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
		return (0);
}
