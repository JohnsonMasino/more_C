#include <stdio.h>
#include <stdlib.h>

/*
 * main - allocates some sise using the calloc function.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int n, i, *ptr;

	printf("Enter total number here:\n");
	scanf("%d", &n);

	ptr = (int *)calloc(n, sizeof(int));

	printf("Enter the values here:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("These values are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", *(ptr + i));
	}
	printf("\nCode developed by Masino\n");
	free(ptr);
	return (0);
}
