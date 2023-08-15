/*
 * File: 4-isalpha.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"
#include <ctype.h>

/**
 * _isalpha -  Program that putchar 1
 *               if c is lowercase
 * @c:  Character to be checked.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

