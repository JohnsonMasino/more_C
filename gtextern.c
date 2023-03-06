#include <stdio.h>

/*
 * main - access a variable from a different block.
 * Return: 0
 * Code by Masino.
 */
int i = 5;

int main(void)
{
	//extern int i;
	printf("From outer block, I = %d\n", i);
	{
		int i = 10;

		printf("From inner block, I = %d\n", i);
	}
	printf("\nCode developed by Masino\n");
	return (0);
}
