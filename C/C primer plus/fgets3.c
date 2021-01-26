// fgets3.c -- 使用fgets()函数 //

#include <stdio.h>
#define STLEN 10

int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgetc(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\n')
            i++;
        if (words[i] == '\n')
            words[i] = '\n';
        else // 如果word[i] == '\0'则执行这部分代码
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("Done.");

    return 0;
}