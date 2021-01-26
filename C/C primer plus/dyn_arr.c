// dyn_arr.c -- 动态分配数组 //

#include <stdio.h>
#include <stdlib.h>     /* 为malloc(),free()提供原型 */

int main(void)
{
    double * ptd;
    int max;
    int number;
    int i = 0;

    puts("What is the maximum number of type double entries?");
    if (scanf("%d", &max) != 1)
    {
        puts("Number not correctly entered -- bye.");
        exit(EXIT_FAILURE);
        /* 表示没有成功地进行一个程序，并且直接退出程序 */
    }
    ptd = (double *) malloc(max * sizeof(double));
    /* c可以不用使用强制类型转换(double *), 但c++必须使用 */
    if (ptd == NULL)    /* malloc()可能分配不到所需的内存，则函数返回空指针 */
    {
        puts("Memory allocation failed.Goodebye.");
        exit(EXIT_FAILURE);
        /* 表示没有成功地进行一个程序，并且直接退出程序 */
    }
    /* ptd现在指向有max个元素的数组 */
    puts("Enter the values (q to quit):");
    while (i < max && scanf("%lf", &ptd[i]) == 1)
        ++i;
    printf("Here are your %d entries:\n", number = i);
    for (i = 0; i < number; i++)
    {
        printf("%7.2f", ptd[i]);
        if (i % 7 == 6)
            putchar('\n');
    }
    if (i % 7 != 0)
        putchar('\n');
    puts("Done.");
    free(ptd);
    /* free()函数释放其参数指向的内存块 */

    return 0;
}
