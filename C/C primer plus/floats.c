// float.c -- 一些浮点型修饰符的组合 */

#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;    /*const变量,限定变量为只读 */

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3e*\n", RENT);
    printf("*%+4.2f*\n", RENT);     /* 初始值若为正，则在值前面显示加号；若为负，则在值前面显示减号 */
    printf("*%010.2f*\n", RENT);    /* 0标记使得打印的值用0填补左边的空白 */

    return 0;
}