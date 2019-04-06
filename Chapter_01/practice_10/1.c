#include <stdio.h>

/*
 将输入复制到输出，并将制表符替换成\t，将回退符替换成\b，将反斜杠替换成\\
 */


int main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if(c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if(c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }else
        {
            putchar(c);
        }
    }
}
