/**
*swap_int - swaps the values of two integers
*@a: first pointer variable
*@b: second pointer variable
*
*/
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
