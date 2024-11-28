#include <stdio.h>
// 嘻嘻，，开始玩if

int main()
{

    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);

    if (age >= 18)
    { // 如果年龄大于等于18岁
        printf("you are now signed up!\n");
    }
    else if (age == 0)
    { // ，如果年龄等于0岁
        printf("you can't sing up ! You were just born!\n");
    }
    else if (age < 0) // ，如果年龄小于0岁
    {
        printf("you haven't been born yet!\n");
    }
    else
    { // ，即年龄在0到18岁之间
        printf("you are too young to sign up!\n");
    }

    return 0;
}