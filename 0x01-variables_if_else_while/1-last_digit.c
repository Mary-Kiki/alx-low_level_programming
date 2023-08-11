/*
 * File: 1-last_digit.c
 * Auth: Mary Kinyanjui
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  Complete the source code in order to
 *            print the last digit of the number
 *
 * Return: Always 0.
 */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than
				5\n", n, n%10)
	}
	else if ((n % 10) < 6 && != 10)
	{
		printf("Last digit of %d is %d and is less than 6
				and not 0\n", n, n%10)
	}
	else 
	{
		printf("Last digit of %d is %d and is zero\n",
				n, n%10)
	}
	
	return (0);
}

