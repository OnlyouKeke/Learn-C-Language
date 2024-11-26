#include <stdio.h>
// 计算圆的周长
int main()
{

    const double PI = 3.14159; // 声明常量PI
    double radius;             // 声明双精度浮点数radius
    double circumference;      // 声明双精度浮点数circumference，圆的半径
    double area;               // 面积

    printf("\nEnter radiius of a circle:");
    scanf("%lf", &radius); // 读取输入的圆的半径

    area = PI * radius * radius;     // 计算圆的面积
    circumference = 2 * PI * radius; // 计算圆的周长

    printf("\nCircumference: %.2lf\n", circumference);
    printf("area :%.2lf\n", area);
    return 0;
}