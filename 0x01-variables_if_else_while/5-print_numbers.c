/*
 * File: 5-print_numbers.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>

/**
 * main -  Program that prints single digits
 *           of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	printf("\n");
	return (0);
}

