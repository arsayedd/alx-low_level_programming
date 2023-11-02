nclude "main.h"

/**
 *  * _strchr - Locates the first occurrence of a character in a string
 *   * @s: The string to search
 *    * @c: The character to find
 *     * Return: Pointer to the first occurrence of the character, or NULL if not found
 *      */
char *_strchr(char *s, char c)
{
	    for (int i = 0; s[i] != '\0'; i++)
		        {
				        if (s[i] == c)
						            return &s[i];
					    }

	        return NULL;
}

