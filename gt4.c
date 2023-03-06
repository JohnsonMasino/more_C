#include <stdio.h>

/*
 *
 */

int main(void)
{
	auto int data = 10;
	int *ptr = NULL;

	ptr = &data;
	printf("First line!\nPointer is = %d\n", *ptr);
	*ptr = 10;
	if (ptr == NULL)
		printf("The pointer is still null\n");
	printf("The value at pointer is %d\n", *ptr);
	printf("\nCode developed by Masino\n");
	return (0);
}
