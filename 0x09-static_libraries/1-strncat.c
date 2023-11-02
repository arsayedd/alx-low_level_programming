nclude "main.h"

/**
 *  * _strncat - Concatenates two strings using at most n bytes from src
 *   * @dest: Destination string
 *    * @src: Source string
 *     * @n: Number of bytes to concatenate
 *      * Return: Pointer to the concatenated string
 *       */
char *_strncat(char *dest, char *src, int n)
{
	    int a = 0, b = 0;

	        while (dest[a] != '\0')
			    {
				            a++;
					        }

		    while (b < n && src[b] != '\0')
			        {
					        dest[a] = src[b];
						        a++;
							        b++;
								    }

		        dest[a] = '\0';

			    return dest;
}

