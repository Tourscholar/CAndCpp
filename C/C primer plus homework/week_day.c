// week_day.c -- 编程练习 //

#include <stdio.h>
#define ONE_WEEK_DAY 7      /* 一周是7天 */

int main(void)
{
    int days;
    int weeks;
    int left;

    printf("Please tell me how many days (<= 0 to quit):");
    scanf("%d", &days);
    while (days > 0)
    {
        weeks = days / ONE_WEEK_DAY;    /* 截断周数 */
        left = days % ONE_WEEK_DAY;     /* 截断天数 */
        printf("%d days are %d weeks, %d days\n", days, weeks, left);
        printf("Please enter next days (<= 0 to quir):");
        scanf("%d", &days);
    }
    printf("Done!");

    return 0;
}