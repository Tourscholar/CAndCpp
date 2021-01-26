// two_func.c -- 一个文件中包含两个函数 //

#include <stdio.h>
void butler(void);  /* ANST/ISO 函数原型(也称函数声明) */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}
void butler(void) /*函数定义开始 */
{
    printf("You rang, sir?.\n");
}