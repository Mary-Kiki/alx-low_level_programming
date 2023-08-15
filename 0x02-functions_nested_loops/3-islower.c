/*
 * File: 3-islower.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"
#include <ctype.h>

/**
 * _islower -  Program that putchar 1
 *               if c is lowercase
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

