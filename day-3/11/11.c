#include <stdio.h>

//case 语句 的使用
int main(){

    char grade;

    printf("\n Enter a letter grade:");
    scanf("%c",&grade);
    
    switch (grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("good!\n");
            break;
        case 'C':
            printf("you did ok!\n");
            break;
        case 'D':
            printf("you passed!\n");
            break;
        case 'F':
            printf("you failed\n");
            break;
        default:
            printf("please enter only valid grades!\n");
    }

    return 0;

}