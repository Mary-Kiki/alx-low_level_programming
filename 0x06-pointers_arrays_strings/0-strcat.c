/**
 * *_strcat - Concanate two strings
 *             using strcat
 *
 * @src: String to concanate.
 * @dest: String to concanate.
 *
 * Return: Always 0.
 */

#include "main.h"
#include <string.h>

char *_strcat(char *dest, char *src)
{
	char *ptr;

	strcat(dest, src);

	ptr = dest;

	return (ptr);
}

