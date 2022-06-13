#include "man.h"

/**
 *_strcpy -function that copies the string pointed to by src
 *including the terminating null byte (\0), to the buffer pointed to by dest.
 *@char *dest: destination of string to be copied
 *char *src: source of string being copied
 *Reurn: apointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
