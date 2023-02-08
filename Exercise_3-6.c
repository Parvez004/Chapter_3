#include<stdio.h>
#include<math.h>
#define pi 3.1415926
#define max_radius 10

int main(void)
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    if (radius>max_radius)
    {
        radius = max_radius;
        printf("\nRadius is limited to %d", max_radius);
    }
    area= pi * pow(radius, 2);
    printf("\nArea= %.4f", area);
    return 0;
}