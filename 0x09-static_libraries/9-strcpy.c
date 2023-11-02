#include "main.h"

/**
 *  * _strcpy - Copies the string pointed to by src to dest
 *   * @dest: Destination string
 *    * @src: Source string
 *     * Return: Pointer to the destination string
 *      */
char *_strcpy(char *dest, char *src)
{
	    int a = 0;

	        while (*(src + a) != '\0')
			    {
				            a++;
					        }

		    for (int b = 0; b < a; b++)
			        {
					        dest[b] = src[b];
						    }

		        dest[a] = '\0';

			    return dest;
}

