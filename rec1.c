#include <stdio.h>

/*
 * main - prints sum of numbers from number to number - 1.
 * Return: 0.
 * Code by Masino.
 */

void main(void)
{
	int q = 0;

	q = sum(6);
	printf("The sum is:\n%d\n", q);
}

int sum(int x)
{
	int s = 0;

	if (x == 1)
		return (x);
	s = x + sum(x - 1);
	return (s);
}
