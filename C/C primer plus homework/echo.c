// echo.c -- 重复输入

#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter you want:\n");
    while ((ch = getchar()) != EOF)
    /* EOF表示end of file文件结尾，被定义为-1，PC中使用ctrl+z来结束文件输入 */
        putchar(ch);
    
    return 0;
}