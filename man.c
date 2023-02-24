#include<stdio.h>
/*
main - prints hello world
*/

int sub(int);

int main(void)
{
    printf("Hello masino\n");
    sub(0);
    return (0);
}

int sub(int a)
{
    if (a < 1)
    {
        printf("this number is 1\n");
    }
    else
    {
        printf("Error here\n");
    }
}
