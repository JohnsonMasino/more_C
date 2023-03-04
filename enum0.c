#include <stdio.h>

/*
 *
 */

typedef enum {
	male = 0,
	female = 1,
} gender;

int main(void)
{
	gender var = female;
	printf("The sise of var element is:\n%d\n", var);
	return (0);
}
