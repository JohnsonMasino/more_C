#include <stdio.h>

/*
 * Code by Masino.
 */

void count(int a)
{
	static int d = 1;

	printf("%d\n", a);
	printf("%d\n", d);
	d++;
	if (a > 1)
	{
		count(a - 1);
		printf("%d\n", d);
	}
}

void main(void)
{
	count(3);
}
