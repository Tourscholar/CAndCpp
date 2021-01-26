// cmpflt.c -- 浮点数比较 //

#include <math.h>   /* 声明math.h文件头 */
#include <stdio.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)    /* 使用fabs()函数比较浮点数 */
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}