#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter Fahrenheit Temperature: \n");
    scanf("%f", &f);
    c=(f-32)/1.8;
    printf("Celsius Temperature is %f", c);
    return 0;
}