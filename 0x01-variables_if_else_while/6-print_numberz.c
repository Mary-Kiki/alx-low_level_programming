/*
 * File: 6-print_numberz.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that putchar single digits
 *           of base 10 starting from 0
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

	putchar('\n');
	return (0);
}

