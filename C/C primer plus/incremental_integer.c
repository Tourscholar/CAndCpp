// incremental_integer.c -- 编程练习 //

#include <stdio.h>

int main(void)
{
    int number;
    int constant = -1;

    printf("Please enter a number:");
    scanf("%d", &number);
    while (++constant < 11)
        printf("%d\n", number + constant);

    return 0;
}