#include "main.h"

/**
 *  * _memcpy - Copies memory area
 *   * @dest: Destination memory
 *    * @src: Source memory
 *     * @n: Number of bytes to copy
 *      * Return: Pointer to the destination memory
 *       */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	    for (unsigned int i = 0; i < n; i++)
		        {
				        dest[i] = src[i];
					    }

	        return dest;
}

