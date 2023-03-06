#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/*
 * main - defines and undefines a variable.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int *ptr = NULL, i;

	ptr = (int *)malloc(5 * sizeof(int));

	printf("Enter five numbers here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("Got it!\nThese numbers are:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	printf("The maximum number in my database is = %d\n", MAX);
	printf("\nCode developed by Masino.\n");
	free(ptr);
	return (0);
}
