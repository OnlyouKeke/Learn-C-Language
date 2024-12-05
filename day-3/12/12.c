#include <stdio.h>
#include <ctype.h>


//计算，，这是一个转换器， 把摄氏度转换为华氏度，反之
int main(){

    char unit;
    float temp;// 温度值

    printf("\nIs the temperature in (F) or (C)?");
    scanf("%c",&unit);//输入

    unit = toupper(unit); // toupper把小写字母转换为大写字母

    if(unit == 'C'){
        printf("The temp is currently in C!");
        scanf("%f",&temp);
        temp - (temp * 9/5) + 32;
        printf("\nThe temp is: %.1f  \n",temp);
    }
    else if(unit == 'F'){
        printf ("The temp is currently in F ");
        scanf("%f",&temp);
        temp = (temp - 32) * 5/9;
        printf("\n the temp is: %.1f \n",temp);

    }
    else{
        printf("%c is not a valid unit \n",unit);

    }


    return 0;

}