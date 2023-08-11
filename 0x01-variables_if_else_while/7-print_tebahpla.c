/*
 * File: 7-print_tebahpla.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that putchar reversed
 *           alphabets z - a
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);

}

