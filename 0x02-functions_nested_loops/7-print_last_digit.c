/*
 * File: 7-print_last_digit.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 * print_last_digit -  Program that prints
 *                      last digit
 * @n: Character to be checked
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');
	return (last);
}

