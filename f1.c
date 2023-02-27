#include <stdio.h>
#include <stdlib.h>

/*
 * main - takes input and tells the position of the cursur.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char nm[30], ch;

	ptr = fopen("mas.txt", "r");
	if (ptr == NULL)
		printf("Error Message here!\n");
	printf("%ld\n", ftell(ptr));
	fscanf(ptr, "%s", nm);
	printf("%s\n", nm);
	fseek(ptr, 0, SEEK_END);
	printf("%ld\n", ftell(ptr));
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
