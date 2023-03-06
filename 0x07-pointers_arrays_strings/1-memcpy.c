#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input
 * @stc: input
 * @n: input
 * Return: Alawys 0 (success)
 * */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
