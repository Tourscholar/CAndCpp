// divide.c -- 演示除法 //

#include <stdio.h>
int main(void)
{
    printf("integer division: 5/4 is %d \n", 5 / 4);
    /* 在C语言中整数除法的小数部分被丢弃 */
    /* 在C99规定中对负数使用趋零截断，即-3.8应变为-3 */
    
    printf("integer division: 6/3 is %d \n", 6 / 3);
    printf("integer division: 7/4 is %d \n", 7 / 4);
    printf("floating division: 7./4. is %1.2f \n", 7. / 4);
    /* 混合整数类型的结果是浮点数，在计算时整数会被转化为浮点数 */
    
    printf("mixed division: 7./4 is %1.2f \n", 7. / 4);

    return 0;
}