#include <stdio.h>
#include <stdlib.h>

/*
 * main - copies the content of a file into another.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr0 = NULL, *ptr1 = NULL;
	char ch;

	ptr0 = fopen("mas.txt", "r");
	if (ptr0 == NULL)
		printf("No such file in my database\n");
	ptr1 = fopen("copy.txt", "w");
	if (ptr1 == NULL)
		printf("No such file in my database\n");
	while ((ch = fgetc(ptr0)) != EOF)
	{
		fputc(ch, ptr1);
	}
	printf("File copying done successfully\n\nCode developed by Masino\n");
	fclose(ptr0);
	fclose(ptr1);
	return (0);
}
