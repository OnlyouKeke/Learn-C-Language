#include <stdio.h>

int main(){
    float item1 = 22;
    float item2 = 234.0;
    float item3 = 232.0;

    printf("dis %.3f$\n",item1);//控制小数点后的精度
    printf("dis %.1f$\n",item2);
    printf("dis %.2f$\n",item3);
    printf("dis %8.3f$\n",item1);//控制最小字段的空格数‘右对齐’
    printf("dis %8.1f$\n",item2);
    printf("dis %8.2f$\n",item3);

    return 0;

}