#include <stdio.h>

/*
 统计空格、制表符和换行符的个数
 */

int main()
{
    int space, tab, line;
    int c;

    space = 0;
    tab = 0;
    line = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            ++line;
        if(c == '\t')
            ++tab;
        if(c == ' ')
            ++space;
    }
    printf("空格数量：%d\n制表符数量：%d\n换行符数量：%d\n", space, tab, line);

}
