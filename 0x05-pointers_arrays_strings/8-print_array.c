#include <stdio.h>
#include "main.h"
/**
 *print_array - Prints n elements of an array
 *@a: Input array
 *@n: Input integer
 *
 *Return: Nil
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		printf("%d", a[i]);
		else
		printf("%d, ", a[i]);
	}
	printf("\n");
}
