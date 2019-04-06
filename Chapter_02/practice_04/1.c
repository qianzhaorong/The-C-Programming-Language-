#include <stdio.h>

/*
 *编写函数squeeze(s1, s2)，将字符串s1中任何与字符串s2中字符匹配的字符都删除
 * */

void squeeze(char s1[], char s2[]);
int isExist(char c, char s[]);

int main()
{
    char s1[] = "hello,world";
    char s2[] = "world";
    printf("原字符串s1为：%s\n字符串s2为：%s\n", s1, s2);
    squeeze(s1, s2);
    printf("删除后的s1为：%s\n", s1);

}

void squeeze(char s1[], char s2[])
{
    int i, j;
    int res;

    for(i = j = 0; s1[i] != '\0'; ++i)
    {
        // 判断s1[i]是否在s2中
        res = isExist(s1[i], s2);
        if(res == 0)
        {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
}

int isExist(char c, char s[])
{
    // 判断字符c是否在字符串s中
    int i;

    i = 0;
    for(i=0; s[i] != '\0'; ++i)
    {
        if(c == s[i])
        {
            return 1; 
        }
    }
    return 0;
}
