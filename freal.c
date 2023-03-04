#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints variables of a function.
 * Return: 0.
 * Code by Masino.
 */

int *disp(void)
{
	int n, i, *ptr;

	ptr = (int *)malloc(3 * sizeof(int));

	for (i = 0; i < 3; i++)
	{
		scanf("%d", (ptr + i));
	}
	return (ptr);
}

int main(void)
{
	int i, *ptr1;

	printf("Welcome!\nEnter your three vsn numbers here\n");
	ptr1 = disp();

	printf("The entered values are:\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d\t", *(ptr1 + i));
	}
	printf("\nCode devloped by Masino.\n");
	free(ptr1);
	return (0);
}
