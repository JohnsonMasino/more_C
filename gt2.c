#include <stdio.h>

/*
 * main - prints some variables declared at different positions in the program.
 * Return: 0.
 * Code by Masino.
 */

int i = 5;
int j = 10;

int main(void)
{
	extern int j;

	printf("I = %d\nJ = %d\n", i, j);
	printf("\nCode developed by Masino\n");
	return (0);
}
