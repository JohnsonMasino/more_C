#include <stdio.h>
#define MUL(a, b) a * b

/*
 * main - prints the product of two arguments.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, b;

	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("The multiplication is = %d\n", MUL(a, b));
	printf("\nCode by Masino\n");
	return (0);
}
