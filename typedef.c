#include <stdio.h>

/*
 * using typedef to customise a function datatype.
 * Return: (0)
 * Code developed by Masino.
 */

typedef struct sch
{
	int a;
	char b;
	float c;
} sch;

int main(void)
{
	sch p;

	printf("Enter a number, a letter and a decimal number here:\n");
	scanf("%d %c %f", &p.a, &p.b, &p.c);
	printf("The values are:\n%d, %c, %f\n", p.a, p.b, p.c);
	return (0);
}
