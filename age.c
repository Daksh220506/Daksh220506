#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    if(age>=18)
    printf("ADULT");
    
    else
    printf("KID");
    return 0;
}