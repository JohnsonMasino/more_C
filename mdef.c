#include <stdio.h>
#define MAX(a, b) if (a < b)\
	printf("The second number is maximum\n"); \
	else \
	printf("The first number is maximum\n");

/*
 * main - prints a statement from a defines macros.
 * Return (0).
 * Code by Masino.
 */

int main(void)
{
	int a, b;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("From your inputs...\n");
	MAX(a, b);
	printf("From the two numbers originally in my database...\n");
	MAX(2, 0);
	return (0);
}
