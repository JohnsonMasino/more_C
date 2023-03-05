#include <stdio.h>

/*
 * main - prints content from an extended variable.
 * Return: 0.
 * Code by Masino.
 */

void fun1();
void fun2();

int x = 10;

void main(void)
{
	extern int x;

	printf("In main block, X from fun1 is: %d\n", x);
	fun1();
	fun2();
	printf("\nCode devloped by Masino\n");
}

void fun1(void)
{
	int x = 1;

	x += 5;
	printf("X in fun1 is: %d\n", x);
}

void fun2(void)
{
	int y = 4;

	y++;
	printf("In fun2, y = %d\n", y);
}
