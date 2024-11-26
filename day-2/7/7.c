#include <stdio.h>
#include <math.h>
// 数学计算函数
int main()
{

    double A = sqrt(9);    // 3,平方根
    double B = pow(2, 4);  // 16，乘方
    int C = round(3.14);   // 3，四舍五入;
    int D = ceil(3.14);    // 3，向下取整;
    int E = floor(3.99);   // 3，向上取整;
    double F = fabs(-100); // 100，绝对值;
    double G = log(3);     // 1.098612，自然对数;
    double H = sin(45);    // 0.707107，正弦;
    double I =cos(45);      // 0.707107，余弦;
    double J =tan(45);      // 1.61978，正切;

    printf("\n%d", E);

    return 0;
}