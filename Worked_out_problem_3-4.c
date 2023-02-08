#include<stdio.h>
int main()
{
    int year=1, period;
    float amount, interest, value;
    printf("Enter amount, interest and period:\n");
    scanf("%f%f%d", &amount, &interest, &period);
    while(year<=period)
    {
        value=amount+ interest*amount;
        printf("%2d Rs %8.2f\n", year, value);
        amount=value;
        year=year+1;
    }
}