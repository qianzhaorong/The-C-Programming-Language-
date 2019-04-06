#include <stdio.h>

/*
 将输入复制到输出，并将其中连续的空格用一个空格代替
 */

int main()
{
    int c;
    int space = 0;

    while((c == getchar()) != EOF)
    {
        if(c != ' ')
        {
            space = 0;
            putchar(c);
        }

        if(c == ' ')
        {
            if(space == 0)
            {
                ++space;
                putchar(c);
            }
        }
    }
}
