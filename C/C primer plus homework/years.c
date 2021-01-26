// The leap years.c -- 课堂练习 //
// leap year 代表闰年 //

#include <stdio.h>

int main(void)
{
    int year;

    printf("Please enter a year:");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap years.\n", year);
    else 
        printf("%d not is leap years.\n", year);

    return 0;
}