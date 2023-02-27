#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr = NULL;
	char text[20];
	int ch;

	ptr = fopen("mas.txt", "r+");
	if (ptr == NULL)
		printf("Error!\nFile absent.\n");
	fseek(ptr, 0, SEEK_END);
	printf("Success!\n");
	ch = ftell(ptr);
	printf("The position of the cusor is at %d\n", ch);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
