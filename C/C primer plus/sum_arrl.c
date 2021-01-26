// sum_arrl.c -- 数组元素之和 //

#include <stdio.h>
#define SIZE 10

int sum(int * , int );       /* 与int ar[]相同，数组名是该数组首元素的地址，
                                表示获得该数组首元素的地址 */

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %d.\n", answer);
    printf("The size of marbles is %lu bytes.\n",
            sizeof (marbles));
    
    return 0;
}

int sum(int * ar, int n)    /* 与int ar[]相同，数组名是该元素数组首元素的地址，
                                表示获得该数组首元素的地址 */
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %lu bytes.\n", sizeof (ar));

    return total;
}