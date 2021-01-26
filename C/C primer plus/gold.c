// golf.c -- 本文演示了C语言的三重赋值特性 //

#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("cheeta  tarzan  jane\n");
    printf("First round score %d %d %d\n", cheeta, tarzan, jane);

    return 0;
}