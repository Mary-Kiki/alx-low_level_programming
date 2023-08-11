/*
 * File: 2-print_alphabet.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that prints alphabet in lower
 *           case using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);

}

