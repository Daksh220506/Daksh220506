#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name); // Read a string from the user

    printf("Hello, %s!\n", name);

    return 0;
}