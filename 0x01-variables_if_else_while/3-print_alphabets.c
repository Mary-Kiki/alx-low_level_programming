/*
 * File: 3-print_alphabets.c
 * Auth: Mary Kinyanjui
 */

#include <stdio.h>
#include <ctype.h>

/**
 * main -  Program that prints alphabet in lower
 *           case & upper using putchar
 *
 * Return: Always 0.
 */
int main(void) 
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar(toupper(alphabet));
	}

	putchar('\n');
	return (0);
}

