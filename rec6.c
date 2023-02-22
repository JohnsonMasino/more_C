#include <stdio.h>

/*
 * main - counts down a number using recusion and function.
 * return: 0.
 * Code by Masino.
 */

int nm(int n)
{
	if (n < 1)
		return (1);
	else
	{
		printf("This number in reduction is:\n%d\n", n - 1);
		nm(n - 1);
	}
}

void main(void)
{
	int a, b;

	printf("Enter a number\n");
	scanf("%d", &a);
	b = nm(a);
	printf("The least number not 0 is:\n%d\n", b);
	printf("\nCode by Masino\n");
}
