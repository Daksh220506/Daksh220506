#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character \n");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is an uppercase letter", ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("%c is a lowercase letter", ch);
    }
    else
    printf("Wrong input!");
    return 0;
}