// larger.c -- 求最大值程序 //

#include <stdio.h>
int main(void)
{
    int number[5];
    int i, a, max;

    printf("Please enter five positive numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    max = number[0];
    for (i = 1; i < 5; i++)
    {
        max = (max > number[i] ? max : number[i]);
    }
    if (max == number[0])
        printf("The larger is %d", number[0] );
    else 
        printf("The larger is %d", max);

    return 0;
}