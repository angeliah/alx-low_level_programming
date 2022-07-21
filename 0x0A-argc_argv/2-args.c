#include "main.h"
#include<stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argv: arguments passed to maina s an array of strings
 * @argc: bnumber of arguments passed to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
