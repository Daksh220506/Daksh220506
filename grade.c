#include <stdio.h>
int main()
{
    int atd, marks, age;
    printf("Enter yout marks\n");
    scanf("%d", &marks);
    printf("Enter yout attendance\n");
    scanf("%d", &atd);
    printf("Enter yout age\n");
    scanf("%d", &age);
    if(atd>90 && marks > 65 && age<18)
    printf("Grade : A");
    else if(atd>80 && atd <90 && marks >55 && marks <65 && age>18 && age<20)
    printf("Grade : B");
    else
    printf("Fail!!");
    return 0;
}