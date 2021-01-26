// width.c -- 字段宽度 //

#include <stdio.h>
#define PAGES 959
int main(void)
{
    printf("*%d*\n",  PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES); /* -标记说明打印的数字位于字段的左侧 */

    return 0;
}