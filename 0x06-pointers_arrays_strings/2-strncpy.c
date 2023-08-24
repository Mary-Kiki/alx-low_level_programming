/**
 * *_strncpy - Copy strings using
 *               strncpy
 *
 * @src: String to concanate.
 * @dest: String to concanate.
 * @n: max num of chars.
 *
 * Return: pointer=dest.
 */

#include "main.h"
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;

	strncpy(dest, src, n);

	ptr = dest;

	return (ptr);
}

