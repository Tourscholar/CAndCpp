// squares.c -- 计算1~20的平方根号 //

#include <stdio.h>
int main(void)
{
    int num = 1;

    while (num < 21)
    {
        printf("%d %d\n", num, num * num);
        /* C语言没有平方根函数 */
        num = num + 1;
    }

    return 0;
}