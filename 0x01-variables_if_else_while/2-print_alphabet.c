#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int p;
	p = 97;

	do {
		putchar(p);
		putchar('\n');
		p++;
	} while (p <= 122);
	return (0);
}
