#include <stdio.h>

/*
 * Code by masino.
 */

void print(int a)
{
	if (a < 1)
		return;
	else
	{
		printf("%d\n", a);
		print(a / 2);
	}
}

void main(void)
{
	print(10);
}
