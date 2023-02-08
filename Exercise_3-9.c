#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer number between 0 to 128: ");
    scanf("%d", &num);
    if (num>0 && num<=128)
    {
        printf("\nThe ASCII character is %c", num);
    }
    else
    printf("\nEntar number between 0 to 128.");
    return 0;
}