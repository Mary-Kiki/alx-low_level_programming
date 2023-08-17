/*
 * File: 5-more_numbers.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 *  more_numbers-Program that prints
 *                10 times 0-14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int times = 0;

	while (times < 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}

		times++;
		_putchar('\n');
	}

}

