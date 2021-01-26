// starting.c -- 编程练习 //

#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("\ntwo");
    two();
    printf("done!\n");

    return 0;
}

void one_three(void)
{
    printf("one");
}

void two(void)
{
    printf("\nthree\n");
}