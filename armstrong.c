#include <stdio.h>
int mains()
{
    printf("Enter a number");
    int num;
    scanf("%d", &num);
    if(num>=0 && num<=9)
    printf("%d is an armstrong number", num);
    else if(num>=10 && num<=99 && num%11==0)
    printf("%d is an armstrong number", num);
    return 0;
}