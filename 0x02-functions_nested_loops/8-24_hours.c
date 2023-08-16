/*
 * File: 8-24_hours.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 * jack_bauer - Program that prints
 *               every minute
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
		       _putchar('0' + hour / 10);
                       _putchar('0' + hour % 10);
                       _putchar(':');
                       _putchar('0' + min / 10);
                       _putchar('0' + min % 10);
                       _putchar('\n'); 
		}
	}
}

