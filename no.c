#include <stdio.h>
#include <stdlib.h>

/*
 * main - tries to read a non existing file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *ptr = NULL;
	char txt[40];
	int cur;

	ptr = fopen("here.txt", "r+");
	if (ptr == NULL)
		printf("Error!\nNo such file in my database\n");
	fseek(ptr, 0, SEEK_SET);
	cur = ftell(ptr);
	printf("The current positiion of the cursor is at %d\n", cur);
	printf("Enter the text you are adding to this position\n");
	scanf("%s", txt);
	printf("The full text is:\n%s", txt);
	printf("Success!\n\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
