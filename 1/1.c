#include <stdio.h>
int main()
{

    int age = 19;        // int 数值型
    float gpa = 2.05;    // float浮点数
    char grade = 'C';    // char字符型
    char name[] = "Bro"; // 字符型 的赋值

    printf("hey %s\n", name);//用%s格式化字符串，
    printf("you are %d years old \n", age);     //用%d格式化整数
    printf("Your averge grade is %c\n", grade); // char 用 %c格式化字符串 
    printf("Your gpa is %f\n");                 // flout 浮点数类型的用%f
    printf("xs,yyds");
    return 0;
}