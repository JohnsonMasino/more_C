#include <stdio.h>
#include <stdlib.h>

/*
 * main - reallocates memory to some variables using a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
        int *ptr, n, i;
	int *ptr1, m, j;

        printf("Enter the number of kids you have:\n");
        scanf("%d", &n);

        ptr = (int *)calloc(n, sizeof(int));

        printf("Enter thier ages here:\n");
        for (i = 0; i < n; i++)
        {
                scanf("%d", (ptr + i));
        }
        printf("These ages are:\n");
        for (i = 0; i < n; i++)
        {
                printf("%d\n", *(ptr + i));
        }
        printf("\nNow enter a different number of kids:\n");
        scanf("%d", &m);

        ptr1 = (int *)realloc(ptr, m * sizeof(int));

        printf("Enter thier new ages here:\n");
        for (j = 0; j < m; j++)
        {
                scanf("%d", (ptr1 + j));
        }
        printf("These new ages are:\n");
        for (j = 0; j < m; j++)
        {
                printf("%d\n", *(ptr1 + j));
        }
        printf("\nCode developed by Masino\n");
        free(ptr1);
        return (0);
}
