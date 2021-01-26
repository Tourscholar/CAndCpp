//three_func.c -- 编程练习 //

#include <stdio.h>
void jolly(void);       /* 用于打印前三条 */
void deny(void);        /* 用于打印最后一条 */

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)       /* 函数定义开始 */
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("which nobody can deny!");
}



