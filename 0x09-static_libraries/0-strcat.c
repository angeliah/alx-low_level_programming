#include "main.h"



/**
 *
 *  * _strcat - function that concatenates two strings
 *
 *   * @src: string to be appended
 *
 *    * @dest: destination string to which @src is to be appended to
 *
 *     *
 *
 *      * Return: pointer to the resulting string @dest
 *
 *       */

char *_strcat(char *dest, char *src)

{



		int i = 0;

			int j = 0;



				while (*(dest + i) != '\0')

						{

									i++;

										}

					while (*(src + j) != '\0')

							{

										*(dest + i) = *(src + j);

												i++;

														j++;

															}

						return (dest);

}
