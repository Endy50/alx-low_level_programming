#include "main.h"
#include "main.h"
/**
 * _strlen -  Returns the length of a string
 *@s: string value to be evaluated
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0')
	{
		p++;
	}
	return (p);
}
