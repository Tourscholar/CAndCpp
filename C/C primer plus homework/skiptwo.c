// skiptwo.c -- 跳过输入中的前两个整数 //

#include <stdio.h>
int main(void)
{
    int n;

    printf("Please rnter three integers:\n");
    scanf("%*d %*d %d", &n);
    
    /* 将*放在%和转换字符之间时，会使得scanf()跳过相应的输出项 */

    printf("The last integer was %d\n",n);

    return 0;
}