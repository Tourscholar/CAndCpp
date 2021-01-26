// strings.c -- 表示字符串的集中方式 //

#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    /* puts()函数只显示字符串，而且自动在显示的字符串末尾加上换行符 */
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);

    return 0;
}