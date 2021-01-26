// stringf.c -- 字符串格式 //

#include <stdio.h>
#define BLURB "Authentic imitation!" /* 使用大写命名符号常量 */

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);

    /*.5告诉printf()函数只打印五个字符，即精度限制了打印字符的个数 */

    return 0;
}
