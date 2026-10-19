#include <stdio.h>

// write a program that calculates the area of a triangle
int main()
{ 
    float base, height;
    printf("Base =");
    scanf(" %f", &base); 

    printf("Height =");
    scanf(" %f", &height);

    float area =(float) 1/2 * base * height;

    printf("Area = %.3f\n", area);

    return 0;
}