#include <stdio.h>

/*
 * main - prints a line of code.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a;

	printf("Enter your prefered number\n");
	scanf("%d", &a);
	if (a > 0)
		printf("No much code today\n");
	else
		printf("No light for code today\n");
	printf("\nCode developed by Masino\n");
	return (0);
}
