#include "main.h"



/**
 *
 *  * _strncpy - function that copies a string
 *
 *   * @src: string sourcee
 *
 *    * @dest: string dest
 *
 *     * @n: number of bytes it can take
 *
 *      *
 *
 *       * Return: char
 *
 *        */

char *_strncpy(char *dest, char *src, int n)

{

		int i = 0;



			while (i < n && *(src + i) != '\0')

					{

								*(dest + i) = *(src + i);

										i++;

											}

				while (i != n)

							dest[i++] = '\0';

					return (dest);

}
