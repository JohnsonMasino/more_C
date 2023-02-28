#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr = NULL;
	int count = 0;
	char c;

	ptr = fopen("mas.txt", "r");
	if (ptr == NULL)
		printf("Error!\nNo such file found\n");
	while ((c = fgetc(ptr))!=EOF)
	{
		if (c == '\n')
		{
			count = count + 1;
		}
	}
	printf("Lines in this file are:\n%d\n", count);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
