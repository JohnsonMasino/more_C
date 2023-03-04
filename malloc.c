#include <stdio.h>
#include <stdlib.h>

/*
 * main - allocates sise to file using malloc.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int n, i, *ptr;

	printf("Enter the number of values...\n");
	scanf("%d", &n);

	ptr = (int*)malloc(n * sizeof(int));

	printf("Enter the values here:\n");
	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));
	printf("The entered numbers are:\n");
	for (i = 0; i < n; i++)
		printf("%d\n", *(ptr + i));
	printf("\nCode developed by Masino\n");
	free(ptr);
	return (0);
}
