// typesize.c -- 打印类型大小 //

#include <stdio.h>
int main(void)
{
    /* C99为类型大小提供%zd转换说明, 不支持C99的编译器可用%lu代替 */

    printf("Type int has a size of %lu bytes.\n", sizeof(int)); /* sizeof()为C语言内置的运算符，以字节为单位给出指定类型的大小 */
    printf("Type char has a size of %lu bytes.\n", sizeof(char));
    printf("Type long has a size of %lu bytes.\n", sizeof(long));
    printf("Type long long has a size of %lu bytes.\n",
    sizeof(long long));
    printf("Type double has a size of %lu bytes.\n",
    sizeof(double));
    printf("Type long double has a size of %lu bytes.\n",
    sizeof(long double));

    return 0;
}