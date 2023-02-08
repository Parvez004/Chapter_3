#include<stdio.h>
#include<math.h>
int main()
{
    int x, square;
    printf("Enter a number: ");
    scanf("%d", &x);
    square=pow(x,2);
    printf("\nResult=%d", square);
    return 0;
}