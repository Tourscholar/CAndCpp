#include <stdio.h>
#define TEN 10

int main(void)
{
    int n = 0;

    while (n++ < TEN)       /* 先使用n的值再递增n */
        printf("%5d", n);
    printf("\n");

    return 0;
}