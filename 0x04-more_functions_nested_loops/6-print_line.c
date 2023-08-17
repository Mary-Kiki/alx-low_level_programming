/*
 * File: 6-print_line.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 *  print_line-Program that prints
 *              straight line
 *
 * @n: Parameter to be checked.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}

