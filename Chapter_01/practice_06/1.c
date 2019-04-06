#include <stdio.h>

/*
   验证表达式:getchar() != EOF的值是0还是1
*/


int main()
{
    int c;

    while(c = getchar() != EOF){
       // putchar(c);
        printf("EOF的值为：%d\n", c);
        break;
    }
}
