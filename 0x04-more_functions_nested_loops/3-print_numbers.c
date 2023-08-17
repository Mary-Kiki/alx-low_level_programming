/*
 * File: 3-print_numbers.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 *  print_numbers-Program that prints
 *                  0-9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');

}
