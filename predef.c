#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Date is: %s(MM/DD/YY)\n", __DATE__);
	printf("\nThe time is: %s(HH/MM/SS)\n", __TIME__);
	printf("\nThe name of this file is: %sn\n", __FILE__);
	printf("\nThe lines in this file are: %d\n", __LINE__);
	printf("\nThe stdc here is: %d\n", __STDC__);
	printf("\nCode developed by Masino\n");
	return (0);
}
