#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C'; // single use    %c

    char b[] = "Bro~"; // array  of characters use %s

    float c = 3.141592; // 4bytes  %f

    double d = 3.141592653589793; // 8bytes(64bytes of precision) 15 - 16 digits %lf

    bool e = true; // 1byte(true or false) %d

    char f = 100; // 1byte (-128 to +127) %d or %c

    unsigned char g = 255; // 1byte(0 to +255 )%d or %c

    short int h = 32767; // 2bytes(-32,768 to +32,768)%d

    unsigned short int i = 65535; // 2bytes(0 to +65,535)%d

    int j = 2147483647; // 4bytes(-2147,483,648 to +2147,483,648) %d

    unsigned int k = 4294967295L; // 4bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; //

    unsigned long long int m = 18446744073709551615U;

    printf("%c\n", a);
    printf("%s\n", b);
    printf("%f\n", c);
    printf("%lf\n", d);
    printf("%d\n", e);   // 使用 %d 输出 bool 类型
    printf("%c\n", f);   // 使用 %c 输出 char 类型
    printf("%d\n", g);   // 使用 %d 输出 unsigned char 类型
    printf("%d\n", h);   // 使用 %d 输出 short int 类型
    printf("%d\n", i);   // 使用 %d 输出 unsigned short int 类型
    printf("%d\n", j);   // 使用 %d 输出 int 类型
    printf("%u\n", k);   // 使用 %u 输出 unsigned int 类型
    printf("%lld\n", l); // 使用 %lld 输出 long long int 类型
    printf("%llu\n", m); // 使用 %llu 输出 unsigned long long int 类型

    return 0;
}
