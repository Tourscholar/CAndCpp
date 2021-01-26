// class2.c -- 课堂练习 //

#include <stdio.h>
int main(void)
{
    int x;
    int y;
    int sum;

    printf("Please enter your first number:");
    scanf("%d", &x);
    printf("Please enter your second number:");
    scanf("%d", &y);

    sum = x + y;
    printf("The sum is %d\n", sum);

    return 0;
}