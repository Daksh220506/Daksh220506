#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float avg=(a+b+c)/3.0;
    printf("Average is %f", avg);
}