#include <stdio.h>

/*
 *
 */

enum xenum
{c, cpp, java};
enum yenum
{xenum};

int main(void)
{
	enum yenum var;

	printf("Sise of an element var is:%ld\n", sizeof(var));
	return (0);
}
