#include <stdio.h>

/*
 * main - prints statements using switch.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, b;
	
	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);
	switch (a + 1)
	{
		case 2:
			printf("Sum is:\n%d\n", a + b);
			break;
		case 3:
			printf("Diff is:\n%d\n", a - b);
			break;
		default:
			printf("Thanks for listening\n");
			break;
	}
	return (0);
}
