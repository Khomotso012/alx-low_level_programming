#include "main.h"

/**
* _memcpy - copies a memory area
* @dest: memory area
* @src: source
* @n: number of bytes
* Return: pointer to the copied memory block
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
