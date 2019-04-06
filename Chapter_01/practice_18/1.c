#include <stdio.h>
#define MAXLINE 1000

/*
 *删除每个输入行末尾的空格及制表符，并删除完全是空格的行
 * */
int getLine(char cur[], int limit);
int delete_space_tab(char cur[], int len);


int main()
{
    int len;
    // 删除后的长度
    int del_len;
    int cur[MAXLINE];

    while((len = getLine(cur, MAXLINE)) > 0)
    {
        del_len = delete_space_tab(cur, len);
        printf("删除后的长度为：%d,删除后的字符串：%s", del_len, cur);
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

int delete_space_tab(char cur[], int len)
{
    int c, i;

    i = len - 1;
    while(i >= 0)
    {
        if(cur[i] != ' ' && cur[i] != '\t' && cur[i] != '\n')
        {
            break;
        }
        else if(cur[i] == '\n')
        {
            --i;
        }
        else
        {
            cur[i] = '\0';
            --i;
        }
    }
    return i+1;
}
