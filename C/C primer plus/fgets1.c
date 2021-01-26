// fgets1.c -- 使用fgets()和fputs()函数 //

#include <stdio.h>
#define STLEN 14

int main(void)
{
    char words[STLEN];

    puts("Enter a string, please");
    fgets(words, STLEN, stdin); /* 与gets()函数不同,此函数会储存换行符
                                    第二项参数为n,则读取n-1个值 */
                                    
    printf("Your string twice (puts(), then fputs():\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please");
    fgets(words, STLEN, stdin);
    printf("Your string twice (put(), then fputs():\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}