// Write a program to calculate area of a circle. (radius is given)

// area of a circle 

#include<stdio.h>

int main() {
    float radious;
    printf("Enter the radious : ");
    scanf("%f", &radious);
    printf("Area of the circle : %f", 3.1416 * radious * radious);

    return 0;
}