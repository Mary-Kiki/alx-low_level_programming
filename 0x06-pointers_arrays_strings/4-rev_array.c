/**
 *  reverse_array - check the code
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

#include "main.h"

void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i=0, j=n-1; i<j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}

