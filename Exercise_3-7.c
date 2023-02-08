#include<stdio.h>

int main()
{
    int num, i=1, multi;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    do
    {
        multi= num*i;
        printf("\n%d X %d = %d", num, i, multi);
        i++;
    } while (i<=10);
    return 0;
}