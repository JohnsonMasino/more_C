#include <stdio.h>
#include <stdlib.h>

/*
 * main - appends a text to a existing file.
 * Return: 0.
 * Code developed by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char app[20];

	ptr = fopen("mas.txt", "a");
	if (ptr == NULL)
		printf("Error!\nFile does not exist!\n");
	printf("Enter the text you want to append\n");
	gets(app);
	fputs(app, ptr);
	printf("Successfully appended\n\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
