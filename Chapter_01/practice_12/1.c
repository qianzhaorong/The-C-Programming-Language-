#include <stdio.h>

/*
 以每行一个单词的形式打印其输入
 */


int main()
{
    int c;
    int flag;

    flag = 0;

    while((c = getchar()) != EOF)
    {
       if(c == '\n' || c == ' ' || c == '\t')
       {
           if(flag == 1)
           {
               printf("\n");
           }
           flag = 0;
       }
       else
       {
           putchar(c);
           flag = 1;
       }
    }
}
