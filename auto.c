#include <stdio.h>

int x = 90;

int main(void)
{
	auto int x = 10;

	{
		auto int x;
		printf("X = %d\n", x);
	}
	printf("X = %d\n", x);
	printf("\nCode developed by Masino\n");
	return (0);
}
