#include<stdio.h>

int main(void)
{
    int days, weeks, years;
    printf("Input thr value of days: ");
    scanf("%d", &days);
    if(days>=0)
    {
        years = days / 365;
    days = days % 365;
    weeks = days / 7;
    days = days % 7;
    printf("Year= %d\nWeeks= %d\n Days= %d", years, weeks, days);
    }
    else 
    {
        printf("Enter valid value.");
    }
    
    return 0;
}