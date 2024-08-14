#include <stdio.h>
void main()
{
    float a,b;
    printf("Enter the sides of the rectangle\n");
    scanf("%f", &a);
    scanf("%f", &b);
    float area=a*b;
    printf("Area of the rectangle is %f", area);    
}