#include<stdio.h>

int main()
{
    int amount, thousand, five_hundred, two_hundred, one_hundred, fifty, twenty, ten, five, two, one;
    printf("Enter amount: ");
    scanf("%d", &amount);
    if (amount>=0)
    {
        thousand = amount / 1000;
        amount = amount % 1000;
        five_hundred = amount / 500;
        amount = amount % 500;
        two_hundred = amount / 200;
        amount = amount % 200;
        one_hundred = amount / 100;
        amount = amount % 100;
        fifty = amount / 50;
        amount = amount % 50;
        twenty = amount / 20;
        amount = amount % 20;
        ten = amount / 10;
        amount = amount % 10;
        five = amount / 5;
        amount = amount % 5;
        two = amount / 2;
        amount = amount % 2;
        one = amount / 1;
        printf("\nThousand= %d\nFive_hundred= %d\nTwo_hundred= %d\nOne_hundred= %d\nFifty= %d\nTwenty= %d\nTen= %d\nFive= %d\nTwo= %d\nOne= %d", thousand, five_hundred, two_hundred, one_hundred, fifty, twenty, ten, five, two, one);
    }
    else
    printf("\nEnter correct amount ");


}    