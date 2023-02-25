#include <stdio.h>
#include <string.h>

/*
 * main - prints a string by character.
 * REturn: 0.
 * Code by Masino
 */

int main(void)
{
	FILE *ptr = NULL;
	int i;
	char name[10] = "Johnson";

	ptr = fopen("abc.txt", "w");
	if (ptr == NULL)
	{
		printf("The pointer is a null pointer\n");
	}
	for (i = 0; i != strlen(name); i++)
	{
		fputc(name[1], ptr);
	}
	printf("The full string is: %s\n", name);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
}
