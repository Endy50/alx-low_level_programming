#include "main.h"
/**
 *print_last_digit - this function prints the last digit of an imputed value
 *@x: the value to be checked
 *
 *Return: value of last digit
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = x * (-1);
	}

	_putchar(x + '0');

	return (x);
}
