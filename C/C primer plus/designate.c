// designate.c -- 使用指定初始化器 //

#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    /* 形如 int arr[6] = {[5 = 212]}; //指将arr[5]初始化为212，
        未初始化的元素都未被设置为0 */
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d\n", i + 1, days[i]);
    
    return 0;
}