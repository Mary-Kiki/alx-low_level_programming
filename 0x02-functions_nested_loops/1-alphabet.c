/*
 * File: 1-alphabet.c
 * Auth: Mary Kinyanjui
 */

#include "main.h"

/**
 * main -  Program that putchar alphabet
 *           in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

