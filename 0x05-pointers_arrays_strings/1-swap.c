/**
 * swap_int - funtion that swaps two numbers
 *
 * @a: input
 * @b: input
 *
 * Return b,a if successful
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
