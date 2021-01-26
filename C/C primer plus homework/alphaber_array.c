// alphabet_array.c -- 打印数组中的每一个值 //

#include <stdio.h>

int main(void)
{
    char array[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        array[i] = 'A' + i;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c\n", array[i]);
    }
    printf("\n");
    
    return 0;
}