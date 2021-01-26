// if-else.c -- 课堂练习 //

#include <stdio.h>

int main(void)
{
    int number;

    printf("Please enter a positive number:");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("This number is a even number.");
    else
        printf("This number is a odd number.");

    return 0;
    
}