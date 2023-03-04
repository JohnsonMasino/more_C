#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints values of some variables using calloc.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int *ptr, n, i;
	char ans[10];

	ptr = (int *)calloc(2, sizeof(int));

	if (ptr == NULL)
		printf("No size allocated yet...\n");
	printf("Enter the numbers in the two labels here:\n");
	for (i = 0; i < 2; i++)
	{
		scanf("%d", (ptr + i));
	}
	printf("Confirm these numbers with CORRECT or WRONG:\n");
	for (i = 0; i < 2; i++)
	{
		printf("%d\n", *(ptr + i));
	}
	scanf("%s", ans);
	printf("%s is noted!\nI want to assure you that\ncomputer makes no mistakes so check your\ninput if you encounter any error messages\nThanks for your check!!!\n", ans);
	printf("\nCode devloped by Masino\n");
	free(ptr);
	return (0);
}
