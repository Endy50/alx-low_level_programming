#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int p;

	p = 122;

	for (p = 122; p >= 97; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
