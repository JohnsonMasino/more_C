#include <stdio.h>

void disp();

int a, b, c = 0;

int main(void)
{
	static int a = 1;

	disp();
	a += 1;
	disp();
	printf("From main block:\nA = %d\nB = %d\n", a, b);
	return (0);
}

void disp(void)
{
	static int a = 2;
	int b = 1;
	a += ++b;
	printf("From function block:\nA = %d\nB = %d\n", a, b);
}
