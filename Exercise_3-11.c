#include<stdio.h>

int main()
{
    int distance, fuel;
    float milage;
    printf("Enter distance and fuel consumed by car:\n");
    scanf("%d%d", &distance, &fuel);
    milage = distance / fuel;
    printf("\nMilage= %.1f", milage);
    return 0;
}