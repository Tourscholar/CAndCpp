// getsputs.c -- 使用gets()和puts()函数 //

#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("Enter a string, please");
    gets(words);    /* 读取整行输入,直到遇到换行符,然后丢弃换行符
                        然后丢弃换行符,储存其余字符 */
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("done.");

    return 0;
}