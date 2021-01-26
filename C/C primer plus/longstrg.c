// longstrg.c -- 打印较长的字符串 //

#include <stdio.h>

int main(void)
{
    printf("Here's one way to print a ");
    printf("long string.\n");
    printf("Here's another way to print a \
long string.\n");   /* 此行代码必须和程序清单中的代码一样从最左边开始
                    ,如果缩进则会包含空格 */
    printf("Here's the newest way to print a"
            "long string.\n");

    return 0;
}