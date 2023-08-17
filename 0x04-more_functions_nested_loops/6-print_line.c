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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		
		_putchar('\n');
	}
}

