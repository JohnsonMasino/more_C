#include <stdio.h>
#include <stdlib.h>

/*
 * main - reads and adds in a file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char txt[50], ch;
	int pos;

	ptr = fopen("new.txt", "r+");
	if (ptr == NULL)
		printf("Error!\nNo such file or directory\n");
	printf("Using ftell, the position of the cursor is:\n%ld\n", ftell(ptr));
	fseek(ptr, 0, SEEK_END);
	pos = ftell(ptr);
	printf("With fseek and then ftell, the length of the string is:\n%d\n", pos);
	fputs("Successfully appended", ptr);
	fseek(ptr, 6, SEEK_SET);
	while (!feof)
	{
		ch = fgetc(ptr);
		printf("First string si:\n%c\n", ch);
	}
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
