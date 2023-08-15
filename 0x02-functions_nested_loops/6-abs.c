/*
 * File: 6-abs.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"
#include <stdlib.h>

/**
 * int _abs - Program that prints
 *              absolute number
 * @n: Character to be checked
 * Return: Always 0.
 */
int _abs(int n)
{
	if ( n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

