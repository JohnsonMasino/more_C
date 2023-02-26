#include <stdio.h>
#include <stdlib.h>

/*
 * main - creates a file and writes into it.
 * Return: (0).
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char name[40], ch;

	ptr = fopen("one.txt", "w+");
	if (ptr == NULL)
		printf("Error!\nThis file does not exist\n");
	printf("Enter a string to put in this file\n");
	gets(name);
	fputs(name, ptr);
	while (!feof(ptr))
	{
		ch = fgetc(ptr);
		printf("%c", ch);
	}
	fputs("Masino Boss", ptr);
	fclose(ptr);
	printf("Success\n\nCode developed by Masino\n");
	return (0);
}
