#include "main.h" 
/**
 *main.h- header file
 *
 *main- Entry point
 *
 *Return: 0
 */

int main(void)
{
	int i;
	
	char c[] = "_putchar";
	i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
