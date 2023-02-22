#include <stdio.h>

/*
 * Code by Masino.
 */

void main(void)
{
	int x;

	x = print(10);
	printf("%d\n", x);
}

int print(int a)
{
	if (a < 1)
		return;
	else
		return (1 + print(a / 2));
}
