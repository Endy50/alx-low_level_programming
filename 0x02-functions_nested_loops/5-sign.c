#include "main.h"
/**
 *print_sign - prints sign
 *@n: integer to be checked
 *
 *Return: 1 and '+' if greater than 0, -1 and '-' if less than 0 or 0 otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
