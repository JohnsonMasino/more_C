#include <stdio.h>
#include <stdlib.h>

/*
 * main - reads a file.
 * Return (0).
 * CODE BY MASINO.
 */

int main(void)
{
	FILE *ptr = NULL;

	ptr = fopen("mas.txt", "r+");
	if (ptr == NULL)
		printf("This file is absent\n");
	fputs("At home", ptr);
	fputc('M', ptr);
	printf("Success!\n\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
