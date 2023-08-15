/*
 * File: 2-print_alphabet_x10.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 * print_alphabet_x10 -  Program that putchar alphabet
 *                         in lowercase 10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		times++;
	}

}

