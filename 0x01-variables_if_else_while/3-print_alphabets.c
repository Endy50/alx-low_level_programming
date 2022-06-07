#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int low, upp;

	low = 97;
	upp = 65;

	for (low = 97; low <= 122; low++)
	{
		putchar(low);
	}
	for (upp = 65; upp <= 90; upp++)
	{
		putchar(upp);
	}
	putchar('\n');
	return (0);
}
