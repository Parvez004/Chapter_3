#include<stdio.h>

int main()
{
    float F=0, C;
    int step=25;
    printf("Fahrenheit     Celsisus\n");
    while (F<=250)
    {
        C=(F-32)/1.8;
        printf("%.2f          %.2f\n", F, C);
        F=F+step;
    }
}
    
    