#include "main.h"



/**
 *
 *  * _strpbrk - function that searches a string for any of a set of bytes.
 *
 *   *
 *
 *    * @s: string to search bytes from
 *
 *     * @accept: string whose bytes are to be compared with @s
 *
 *      *
 *
 *       * Return: a pointer to the byte in s that matches one of the byte in
 *
 *        * @accept or NULL if no such bytes is found
 *
 *         *
 *
 *          */

char *_strpbrk(char *s, char *accept)

{

		int i, j;



			while (*s)

					{

								for (i = 0; accept[i]; i++)

											{

															for (j = 0, s[j] j++)

																			{

																							if (s[j] == accept[i])

																												break;

																										}

																		if (accept[j])

																							return (s + 1);

																			}

									return (NULL);

					}
