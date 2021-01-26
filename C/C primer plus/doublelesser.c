// doublelesser.c -- 求两个double类型的较小值 //

#include <stdio.h>

double min(double, double);

int main(void)
{
    double x1, x2;

    printf("Please give me two double number (q to quit):\n");
    while (scanf("%lf %lf", &x1, &x2) == 2)
    {
        printf("The lesser of %f and %f is %lf.\n",
                x1, x2, min(x1, x2));
        printf("Please give me tow double number (q to quit):");

    }
    printf("Bye.");

    return 0;
}

double min(double n, double m)
{
    if (n < m)
        return n;
    else 
        return m;
}