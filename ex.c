#include <stdio.h>

void fun1();
void fun2();

int a = 10;

int main(void)
{
	printf("A = %d\n", a);
	fun1();
	fun2();
	printf("\nCode developed by Masino\n");
	return (0);
}

void fun1(void)
{
	int a = 2;

	a++;
	printf("A in fun1 block is: %d\n", a);
}

void fun2(void)
{
	printf("Hello!\nTexting from fun2 block\n");
}
