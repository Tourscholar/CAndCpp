//day_monl.c -- 打印每个月的天数 //

#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    /* 从ANSI C开始支持这种初始化 */
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1,  days[index]);
    
    return 0;
}