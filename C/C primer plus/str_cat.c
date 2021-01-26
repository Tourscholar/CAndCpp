// str_cat.c -- 拼接两个字符串 //

#include <stdio.h>
#include <string.h>     /* strcat()函数的原型在该头文件中 */
#define SIZE 80

char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes";

    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        /* strcat()函数接受两个字符串作为参数,把第二个字符串的备份附加
            在第一个字符串的末尾，并把拼接后的的新字符串作为第1个字符串
            ,第2个字符串不变 */
        puts(flower);
        puts(addon);
    }
    else 
        puts("End of file encountered!");
    puts("bye");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (ret_val[i] != '\n' && ret_val[i] != '\0')
            i++;
        if (ret_val[i] == '\n')
            ret_val[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}