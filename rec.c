#include <stdio.h>

/*
 * main - prints a recursion function call.
 * Return: 0.
 * Code by Masino.
 */

int disp(int n)
{
	if (n < 1)
		return (0);
	else
	{
		printf("%d\n", n);
		disp(n - 1);
		printf("%d\n", n);
	}
}

int main(int n)
{
	n = 3;
	disp(n);
}
