#include <stdio.h>
#include <stdlib.h>

/*
 */

void main(void)
{
	FILE *ptr = NULL;
	char hh;
	char txt[30];

	ptr = fopen("new.txt", "r+");
	if (ptr = NULL)
		printf("Error!\nFile absent\n");
	fseek(ptr, 6, SEEK_SET);
	rewind(ptr);
	while (!feof(ptr))
	{
		hh = fgetc(ptr);
		printf("%c\n", hh);
	}
	fclose(ptr);
}
