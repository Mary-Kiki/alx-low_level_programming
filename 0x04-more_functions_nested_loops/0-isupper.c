/*
 * File: 0-isupper.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"
#include <ctype.h>

/**
 * int _isupper- Program that check
 *                if upper
 * @c: Character to be checked.
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

