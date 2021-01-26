// mod_str.c -- 修改字符串

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCount(const char *);

int main(void)
{
    char line[LIMIT];
    char * find;

    puts("Please enter a line:");
    fgets(line, LIMIT, stdin);
    find = strchr(line, '\n');          /* 查找换行符 */
    if (find)
        *find = '\0';
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.\n",
            PunctCount(line));
    
    return 0;
}

void ToUpper(char * st)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    int ct = 0;
    while (*str)
    {
        if (ispunct(*str))
        /* 若 c 为标点符号或特殊符号（非空格、非数字和非英文字母）返回非 0 值，
        否则返回 0。*/
            ct++;
        str++;
    }

    return ct;
}