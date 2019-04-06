#include <stdio.h>

/*
   打印EOF的值
*/


int main()
{
    int c;

    while((c = getchar()) == EOF){
        printf("EOF的值为：%d\n", c);
        break;
    }
}
