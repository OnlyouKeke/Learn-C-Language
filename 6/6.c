#include <stdio.h>

int main()
{
    char name[25];
    int age;

    printf("what's your name?\n");
    scanf("%s", name);
    
    printf("\nhao old are you ?\n");
    scanf("%d", &age);

    printf("hello %s\n", name);
    printf("you are %d years old\n", age);

    return 0;
}
