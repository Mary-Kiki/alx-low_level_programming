/*
 * File: 1-isdigit.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"
#include <ctype.h>

/**
 *  _isdigit- Program that check
 *                if digit
 *
 * @c: Parameter to be checked.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

