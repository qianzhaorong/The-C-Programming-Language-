#include <stdio.h>
#define MAXLINE 1000    /* 允许输入行的最大长度  */

int getLine(char line[], int maxline);
void copy(char to[], char from[]);


/* 打印最长的输入行 */
int main()
{
    // 当前行长度
    int len;
    // 目前为止发现的最长行的长度
    int max;
    // 当前的输入行
    int line[MAXLINE];
    // 用于保存最长的行
    int longest[MAXLINE];

    max = 0;
    while((len = getLine(line, MAXLINE)) > 0)
    {
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
    {
        printf("%s", longest);
    }
}

/* 将一行读入到line中并返回其长度 */
int getLine(char line[], int maxline)
{
    int c, i;

    for(i=0; i<maxline-1 && (c=getchar()) != EOF && c!='\n';++i)
    {
        line[i] = c;
    }
    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* copy函数，将from复制到to */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

