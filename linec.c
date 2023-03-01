#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr = NULL;
	char ch;
	int cur, num = 0, i;

	ptr = fopen("mas.txt", "r");
	if (ptr == NULL)
		printf("Error!\nFile not found\n");
	cur = fseek(ptr, 0, SEEK_SET);
	printf("The cursor is now at: %d\n", cur);
	for (i = 0; i != '\n'; i++)
	{
		num = fgetc(ptr);
		num++;
	}
	printf("%ld\n", sizeof(FILE));
	printf("The number of letters in this file is:%d\n", num);
	printf("\nCode developed by Masino\n");
	fclose(ptr);
	return (0);
}
