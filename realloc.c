#include <stdio.h>
#include <stdlib.h>

/*
 * main - reallocates memory to some variables using a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int *ptr, *ptr0, n, i;

	printf("Enter the number of kids you have:\n");
	scanf("%d", &n);

	ptr = (int *)calloc(n, sizeof(int));

	printf("Enter thier ages here:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("These ages are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	printf("\nNow enter a different number of kids:\n");
	scanf("%d", &n);

	ptr0 = (int *)realloc(ptr, n * sizeof(int));

	printf("Enter thier new ages here:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr0 + i));
	}
	printf("These new ages are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr0 + i));
	}
	printf("\nCode developed by Masino\n");
	free(ptr0);
	return (0);
}
