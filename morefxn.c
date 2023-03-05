#include <stdio.h>

int fun(void)
{
	static int num = 16;

	return (num--);
}

int main(void)
{
	for (fun(); fun(); fun())
	{
		printf("%d\n", fun());
	}
	printf("\nCode devloped by Masino\n");
	return (0);
}
