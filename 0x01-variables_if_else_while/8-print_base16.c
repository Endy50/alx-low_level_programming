#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int i;

	char hex[] = "0123456789abcdef";
	i = 0;
	while (i <= 15)
	{
		putchar(hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
