// bottles.c -- 递减运算符 //

#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX + 1;

    while (--count > 0)
    /* 递减运算符号和递增运算符号规则相同 */
    {
        printf("%d bottles of spring water on the wall,"
                "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
        /* 双\n表示空出两行 */
    }

    return 0;
}