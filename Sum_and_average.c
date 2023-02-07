#include<stdio.h>
int main()
{
    int i=0;
    float num, sum=0, avg;
    printf("Enter numbers: \n");
    while (i<10)
    {
        scanf("%f", &num);
        sum=sum+num;
        i++;
    }
    avg=sum/10;
    printf("Sum= %f\nAvg= %f", sum, avg);
    
}