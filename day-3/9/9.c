#include <stdio.h>
#include <math.h>
//求三角形第三边
int main()
{

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);
    printf("Enter side B: ");
    scanf("%lf", &B);
    //printf("Enter side C: ");
    //scanf("%lf",&C);

    C = sqrt(A*A + B*B);
    printf("Side :C %lf\n", C);

    return 0;
}