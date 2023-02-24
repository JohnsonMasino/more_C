#include <stdio.h>

/*
 * main - reads and writes to a file.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	FILE *p;
	char nm[20] = "Johnson Masino";

	p = fopen("me.txt", "w");
	printf(nm, p);
	printf("\n");
	fclose(p);
	return (0);
}
