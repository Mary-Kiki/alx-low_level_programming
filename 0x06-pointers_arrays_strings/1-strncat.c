/**
 * *_strncat - Concanate two strings
 *              using strncat
 *
 * @src: String to concanate.
 * @dest: String to concanate.
 * @n: max num of chars.
 *
 * Return: pointer=dest.
 */

#include "main.h"
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	char *ptr;

	strncat(dest, src, n);

	ptr = dest;

	return (ptr);
}

