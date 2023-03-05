#include <stdio.h>

static char ch;

void disp();

void main(void)
{
	disp();
	disp();
	printf("Ch = %c\n", ch);
	printf("\nCode developed by Masino\n");
}

void disp(void)
{
	static int x;
	int y = 10;

	x = x + 10;
	y--;
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
}
