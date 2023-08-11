/*
 * File: 8-print_base16.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that putchar hexadecimal
 *           digits 0-9 a-f
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	char letter;

	for (letter = 'a'; letter >= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);

}

