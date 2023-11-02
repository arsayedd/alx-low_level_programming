nclude "main.h"

/**
 *  * _strcat - Concatenates two strings
 *   * @dest: Destination string
 *    * @src: Source string
 *     * Return: Pointer to the concatenated string
 *      */
char *_strcat(char *dest, char *src)
{
	    int a = 0, b = 0;

	        while (dest[a] != '\0')
			    {
				            a++;
					        }

		    while (src[b] != '\0')
			        {
					        dest[a] = src[b];
						        a++;
							        b++;
								    }

		        dest[a] = '\0';

			    return dest;
}

