#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i != j){
		putchar(i + '0');
		putchar(j + '0');
			}
		if(i*j == 8*9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
