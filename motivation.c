#include <stdio.h>

/*
 */

int main(void)
{
	int a;

	printf("Enter a number here for your motivation\n");
	scanf("%d", &a);
	if (a < 0)
		printf("You already know what happens when you give up.\nFind out what happens if you dont\n");
	else if (a == 0)
		printf("Do it today!\nTomorrow is not promised\n");
	else if (a > 0 && a < 8)
		printf("Do hard things...\nYou know you can not settle for the less\n");
	else
		printf("No motivation selected for this number for now.\nCheck back later...\n");
	printf("\nCode developed by Masino\n");
	return (0);
}
