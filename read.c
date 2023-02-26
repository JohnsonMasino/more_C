#include <stdio.h>
#include <stdlib.h>

/*
 * main - reads the input of a file.
 * If this is not existing, it will print an error message.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char name[10], ch;

	ptr = fopen("man.c", "r");
	if (ptr == NULL)
		printf("Error!\nFile does not exist\n");
	while (!feof(ptr))
	{
		ch = fgetc(ptr);
		printf("The characters are:\n%c\n", ch);
	}
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
