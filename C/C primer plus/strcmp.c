// strcmp.c -- 该程序是否能正常运行? //

#include <stdio.h>
#include <string.h>     /* strcmp()的函数原型在该头文件中 */
#define ANSWER "Grant"
#define SIZE 40

char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0)
    /* 由于非零值都为零 也可写为 while (strcmp(try, ANSWER)) */
    /* strcmp()函数通过比较运算符来比较字符串，如果两个字符串参数相同，
        该函数就返回0 */
    {
        puts("No, that's wrong. Try angin.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}