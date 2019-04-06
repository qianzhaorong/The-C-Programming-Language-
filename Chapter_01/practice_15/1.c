#include <stdio.h>

/*
 *重新编写温度转换程序，使用函数实现温度转换计算
 * */

float calculate(float fahr);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = calculate(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

float calculate(float fahr)
{
    int celsius;

    celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;
}
