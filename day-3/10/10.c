#include <stdio.h>
//嘻嘻，，开始玩if

int main(){

    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age >= 18 ){
        printf("you are now signed up!\n");
    
    }
    else if(age < 0)
    {
        printf("you haven't been born yet!\n");
    }
    else{
        printf("you are too young to sign up!\n");
    }


    return 0;
}