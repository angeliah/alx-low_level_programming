#include "main.h"

/**
 * _strncat - function that concatenates two srings
 * @src: string source
 * @dest: srting destination
 * @n: number of bytes to receive
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i ) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
