#include <stdio.h>
#include <stdlib.h>

/*
 * main - reads the letter at the fifth index.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char text[40], ch;
	int cur;

	ptr = fopen("mas.txt", "r+");
	if (ptr == NULL)
		printf("No such file!\n");
	fseek(ptr, 5, SEEK_SET);
	ch = fgetc(ptr);
	printf("%c\n", ch);
	cur = ftell(ptr);
	printf("The cusur is at %d\n", cur);
	printf("\nCode devloped by Masino\n");
	fclose(ptr);
	return (0);
}
