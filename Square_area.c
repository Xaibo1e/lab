#include <stdio.h>
float squareArea(float side)
{
    return side * side;
}

void main()
{
    float side, area;
    printf("Enter side : ");
    //side = 5.25;
    scanf("%f",&side);
    area = squareArea(side);
    printf("Square Area is %.2f",area);
}
