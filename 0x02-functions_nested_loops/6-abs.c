#include "main.h"
/**
 *_abs - prints the absolute value of a integer
 *@ab: the integer whose value is to be checked
 *
 * Return: returns the absolute value
 */
int _abs(int ab)
{
	if (ab < 0)
	{
		ab = ab * (-1);
	}
	return (ab);
}
