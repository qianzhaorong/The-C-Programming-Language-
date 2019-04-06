#include <stdio.h>
#include <limits.h>

/*
 *确定由signed和unsigned限定的char/short/int/long类型变量的取值范围
 * */

int main()
{
    printf("signed int类型的最大值为：%d\n", INT_MAX);
    printf("signed int类型的最小值为：%d\n", INT_MIN);
    printf("signed char类型的最大值为：%d\n", SHRT_MAX);
    printf("signed char类型的最小值为：%d\n", SHRT_MIN);
}
