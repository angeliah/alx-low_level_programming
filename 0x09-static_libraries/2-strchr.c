#include "main.h"

#include <stdlib.h>



/**
 *
 *  * _strchr - function that locates a character in a string.
 *
 *   * @c: charater to be located
 *
 *    * @s: string to be checked
 *
 *     * Return: pointer to the first occurrence of the character @c in string @s
 *
 *      * or null if @c is not found
 *
 *       */

char *_strchr(char *s, char c)

{

		while (*s)

				{

							if (*s != c)

										{

														s++;

																}

									else

													return (s);

										}

			if (c == '\0')

						return (s);

				return (NULL);

}
