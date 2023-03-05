#include <stdio.h>

/*
 * main - calls a function and performs some actions.
 * Return: 0.
 * Code by Masino.
 */

void disp();

int a, b, c = 0;

int main(void)
{
	auto int a = 1;

	disp();
	a += 1;
	disp();
	printf("From main block:\nA = %d\nB = %d\n", a, b);
	printf("\nCode developed by MAsino\n");
	return (0);
}

void disp(void)
{
	register int a = 2;
	int b = 1;
	a += ++b;
	printf("From function block:\nA = %d\nB = %d\n", a, b);
}
