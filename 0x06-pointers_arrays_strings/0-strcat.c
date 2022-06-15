#include "main.h"

/**_strcat - function that concatenates two strings
 * @src: string to be appended
 * @dest: destination string to which @src is to be appended to
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	char *str3[100];

	int i = 0; j = 0;

	while (*src[i] != '\0')
	{
		*str3[j] = *src[i];
		i++;
		j++;
	}

	i = 0;
	while (*dest[i] != '\0')
	{
		*str3[j] = *dest[i];
		i++;
		j++;
	}
	*str[3] = '\0';
	return (*str3);
}
