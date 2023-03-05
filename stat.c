#include <stdio.h>

void disp();

void main(void)
{
	disp();
	disp();
	printf("\nCode developed by Masino\n");
}

void disp(void)
{
	static int x;
	
	printf("X = %d\n", x);
	x += 10;
	printf("Updated value of X is:\n%d\n", x);
}
