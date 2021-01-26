// praisel.c -- 使用不同类型的字符串 //

#include <stdio.h>
#define PRAISE "You are an extraordinary being."    /* 双引号中的内容为字符串 */
int main(void)
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);      /* scanf()函数在遇到第一个空白(空格，制表符或换行符)时就不再读取输入 */
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}