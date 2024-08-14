#include <stdio.h>
// program to chekc if a given number is positive or negative and odd or even therafter
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n>=0)
    {
        printf("%d is a positive number\n", n);
        if(n%2==0){
            printf("%d is even", n);
        }
        else{
            printf("%d is odd", n);
        }
    }
    else{
        printf("%d is a negative number\n", n);
        if(n%2==0){
            printf("%d is even", n);
        }
        else{
            printf("%d is odd", n);
        }
    }
}