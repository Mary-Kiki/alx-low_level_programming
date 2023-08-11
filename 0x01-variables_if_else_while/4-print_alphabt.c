/*
 * File: 4-print_alphabt.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that prints alphabet in lower
 *           case except q & e using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';

	while ( alphabet <= 'z')
	{
		if( alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');
	return (0);

}

