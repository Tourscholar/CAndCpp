// add_one.c -- 递增：前缀和后缀 //

#include <stdio.h>
int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;    /* 等同于super = super + 1 */
        ++ultra;    /* 等同于ultra = ultra +1 */
        
        // 单独使用递增运算符，两种方式都相同 //
        
    // a_post = a++; 后缀：使用a的值之后，递增a //
    // b_pre = ++b; 前缀：使用b的值之前，递增b //

        printf("super = %d, ultra = %d \n", super, ultra);
    }

    getchar();
    return 0;
}