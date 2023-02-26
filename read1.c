#include <stdio.h>
#include <stdlib.h>

/*
 * main - reads and prints the content of a file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *p = NULL;
	char content[30];

	p = fopen("mas.txt", "r");
	if (p == NULL)
		printf("Error!\nFile not present\n");
	while (!feof(p))
	{
		fgets(content, 8, p);
		printf("The displayable content is\n%s\n", content);
	}
	printf("\nCode developed by Masino\n");
	fclose(p);
	return (0);
}
