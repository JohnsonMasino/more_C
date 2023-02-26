#include <stdio.h>
#include <stdlib.h>

/*
 * main - creates, reads and writes a file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char name[30], ch;

	ptr = fopen("mas.txt", "w+");
	if (ptr == NULL)
		printf("Error!\nFile absent\n");
	fputs("Masino\nIs Stronger Now\n", ptr);
	rewind(ptr);
	while (!feof(ptr))
	{
		ch = fgetc(ptr);
		printf("%c", ch);
	}
	fputs("Come Home\n", ptr);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
