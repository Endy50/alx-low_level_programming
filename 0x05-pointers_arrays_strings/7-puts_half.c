#include "main.h"
#include <stdio.h>
/**
 *puts_half - Prints second half of a string str
 *@str: Input string
 *
 * Return: Nil
 */
void puts_half(char *str)
{
	int length = 0, half;

	while (*(str + length) != '\0')
	{
		length++;
		if (!(length % 2))
			half = length / 2;
		else
			half = (length + 1) / 2;
	}
	while (*(str + half) != '\0')
	{
		putchar(*(str + half));
		half++;
	}
	putchar('\n');
}
