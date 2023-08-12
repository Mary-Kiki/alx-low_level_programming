/*
 * File: 9-print_comb.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that putchar combination
 *           of single-digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}

