#include <stdio.h>

/*
 * main - prints a function calling another function.
 * Return: 0.
 * Code by Masino.
 */

void main(void)
{
	printf("%d\n", fxn0(5));
}

int fxn0(int a)
{
	if (a <= 1)
		return (1);
	else
		return (a * fxn1(a - 1));
}

int fxn1(int b)
{
	if (b <= 1)
		return (1);
	else
		return (b * fxn0(b - 1));
}
