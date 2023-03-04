#include <stdio.h>
#include <stdlib.h>

/*
 * main - uses malloc to allocate sise to a variable.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int *ptr, n, i;

	ptr = (int *)malloc(3 * sizeof(int));

	printf("Enter the number of each van in the store:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("The entered numbers are:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	printf("\nCode developed by Masino\n");
	free(ptr);
	return (0);
}
