// sizeof.c -- 使用sizeof运算符 //

#include <stdio.h>
#include <string.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %lu, n has %lu bytes; all ints have %lu bytes.\n",
            n, sizeof(n), intsize);
            
    // sizeof返回size_t类型的值 //
    
    return 0;
}