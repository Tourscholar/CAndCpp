// prntval.c -- printf()的返回值 //

#include <stdio.h>
int main(void)
{
    int bph = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph);
    printf("The printf() function printed %d characters.\n",
        rv);
    /* printf()函数的返回值为打印字符的个数 */
    
    return 0;
}