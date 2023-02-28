#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr = NULL;
	int count = 1;

	ptr = fopen("mas.txt", "r");
	if (ptr == NULL)
		printf("Error!\nNo such file found\n");
	fgetc(ptr);
	while ((fgetc(ptr)) != EOF)
	{
		if ((fgetc(ptr)) == '\n')
		{
			count = count + 1;
		}
	}
	printf("Lines in this file are:\n%d\n", count);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
