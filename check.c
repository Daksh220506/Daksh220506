#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9')
    {
        printf("%c is a digit", ch);
    }
    else{
        printf("%c is not a digit", ch);
    }
    return 0;
}