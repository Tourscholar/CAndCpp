// showf_pt.c -- 以两种方式显示float类型的值 //

#include <stdio.h>
int main()
{
    float aboat = .45e-6;
    double abet = .14e9;
    long double dip = .32e-5;

    printf("%f can be written %e\n", aboat, aboat);

    /* 下一行要求编译器支持C99或其中相关特性 */
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet,abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}