#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; //bytes
    int age;

    printf("what's your name?\n");
    //scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //'\0' is the null terminator


    printf("\nhao old are you ?\n");
    scanf("%d", &age);

    printf("hello %s\n", name);
    printf("you are %d years old\n", age);

    return 0;
}
