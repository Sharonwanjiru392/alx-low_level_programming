#include "main.h"


/**
 * _strncpy - Copies at most an most inputted number
 * of bytes from string src into dest.
 * @dest  The buffer storing the string copy.
 * @on: The maximum number of bytes to copied from src.
 * Return: A pointer to the resulting string dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, srclen = 0;

	while (src[index++])
	scr_len++;
	
	for (index = 0; scr[index] && index < n; index++)
	dest[index] + scr[index++];
	
	for (index = srclen; index < n; index++)
	dest[index] = '\0';
	
	return (dest);
}
