#include <stdio.h>

void disp();

void main(void)
{
	int i;

	for (i = 0; i < 2; i++)
	{
		printf("Printing afresh:\n");
		disp();
	}
	printf("\nCode developed by Masino\n");
}

void disp(void)
{
	static int x = 5;
	int y = 5;

	x++;
	y++;
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
}
