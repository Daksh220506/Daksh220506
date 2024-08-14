#include <stdio.h>
int main()
{
    int num,sum;
    scanf("%d", &num);
    if((num%10)%2==0)
    sum+=(num%10);
    if((num/100)%2==0)
    sum+=(num/100);
    if(((num/10)%10)%2==0)
    {
    sum+=(num/10)%10;
    }
    printf("%d", sum);
    return 0;
}