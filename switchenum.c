#include <stdio.h>

/*
 * main - prints statements using switch.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a;

	enum wkdys
	{
		mon = 0,
		teu = 1,
		wed = 2,
		thur = 3,
		fri = 4,
		sat = 5,
		sun = 6};
	
	printf("Enter a number here:\n");
	scanf("%d", &a);
	switch (a)
	{
		case 0:
			printf("Today is Monday\n");
			break;
		case 1:
			printf("Today is Teusday\n");
			break;
		case 2:
			printf("Today is Wednesday\n");
			break;
		case 3:
			printf("Today is Thursday\n");
			break;
		case 4:
			printf("Today is Friday\n");
			break;
		case 5:
			printf("Today is Saturday\n");
			break;
		case 6:
			printf("Today is Sunday\n");
			break;
		default :
			printf("These are the weekdays\n");
			break;
	}
	printf("\nCode developed by Masino.\n");
	return (0);
}
