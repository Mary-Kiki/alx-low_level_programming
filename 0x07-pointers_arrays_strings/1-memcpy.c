#include "main.h"
#include <string.h>

/**
 * *_memcpy - Copy memory
 *
 * @dest: destination
 * @src: Source
 * @n: integer
 *
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}

