//fibonacci2.c -- 利用循环计算斐波那契数列 //

#include <stdio.h>

void Fibonacci(unsigned int n);

int main(void)
{
    unsigned long num;

    printf("Enter the larger number of fabonicci:\n");
    scanf("%ld", &num);
    Fibonacci(num);

    return 0;
}

void Fibonacci(unsigned int n)
{
    int fib1 = 1;
    int fib2 = 1;
    int sum = 0;

    printf("%d %d ", fib1, fib2);

    for (int i = 2; i < n; i++)
    {
        sum = fib1 + fib2;
        printf("%d ", sum);
        fib1 = fib2;
        fib2 = sum;
    } 
}