#include "main.h"
#include <string.h>

/**
 * *_memset - Fills memory
 *
 * @b: char to be checked
 * @n: int to be checked
 * @*s: pointer
 *
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{

	memset(s, b, n);


	return (s);
}

