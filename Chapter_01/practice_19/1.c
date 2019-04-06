#include <stdio.h>
#define MAXLINE 1000

/*
 *编写函数reverse(s)，将字符串s中的字符顺序颠倒过来
 * */
int getLine(char c[], int limit);
int reverse(char s[], int len);
void swap(char s[], int i, int j);

int main()
{
    int len;
    int cur[MAXLINE];

    while((len = getLine(cur, MAXLINE)) > 0)
    {
        reverse(cur, len);
        printf("%s\n", cur);
    }
}

int getLine(char cur[], int limit)
{
    int c, i;

    for(i=0; i<limit && (c=getchar()) !=EOF && c!='\n'; ++i)
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

int reverse(char s[], int len)
{
    int i, j;

    i = 0;
    j = len - 1;
    while(i <= j)
    {
        swap(s, i, j);
        ++i;
        --j;
    }
}

void swap(char s[], int i, int j)
{
    int temp;

    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

