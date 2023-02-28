#include <stdio.h>
#include <stdlib.h>

/*
 * main - copies a file to another file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	FILE *ptr1 = NULL;
	char ch;
	int pos;

	ptr = fopen("mas.txt", "r");
	if (ptr == NULL)
		printf("NO FILE!\n");
	ptr1 = fopen("New.txt", "w");
	if (ptr1 == NULL)
		printf("Error!\nThe destination file not created yet\n");
	pos = fseek(ptr, 0, SEEK_SET);
	while ((ch = fgetc(ptr)) != EOF)
	{
		fputc(ch, ptr1);
	}
	printf("Second file created successfully\n");
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
