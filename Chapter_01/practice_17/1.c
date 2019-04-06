#include <stdio.h>
#define MAXLINE 1000

/*
 * 打印长度大于80字符的所有输入行
 * */

int getLine(char[], int);

int main()
{
    // 存放当前的输入行
    int cur[MAXLINE];
    // 当前行的长度
    int len;

    while((len = getLine(cur, MAXLINE)) > 0)
    {
        printf("%d\n", len);
        if(len > 80)
        {
            printf("%s\n", cur);
        }
    }

}

int getLine(char cur[], int limit)
{
    int c, i;

    for(i=0; i<limit && (c=getchar())!=EOF && c!='\n';++i)
    {
        cur[i] = c;
    }
    if(c == '\n')
    {
        cur[i] = c;
        ++i;
    }
    cur[i] = '\0';
    return i;
}
