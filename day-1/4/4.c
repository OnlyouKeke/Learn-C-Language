#include <stdio.h>

int main(){
    // 定义一个常量 pi，其值为 3.14159
    const float pi = 3.14159;
    
    // 尝试给常量 pi 赋值，这是不合法的，因为常量的值不能被修改
    pi = 114514;

    // 输出 pi 的值，尽管上面的赋值操作是无效的，pi 的值仍然是 3.14159
    printf("%f\n",pi);
    
    return 0;//输出，报错
}