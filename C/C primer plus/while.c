#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n++ < 3)     /* n的值从0开始，再被递增1 */
        printf("n is %d\n", n);
    printf("Taht is all this prigram does.\n");

    return 0;
}