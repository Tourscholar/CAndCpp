#include <iostream>
#include <cmath>
/**
 * 两种算法求解给定多项式在给定定点x处的值
 */
double functionOne(int n, double a[], double x);
double functionTwo(int n, double a[], double x);

 /* f(x) = a0 +a1*x+...+an-1*x^(n-1)+an*x^n */
double functionOne(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++)
    {
        p += (a[i] * pow(x, i));
    }
    return p;
}

 /* f(x) = a0 + x*(a1+x*(...(an-1+x*(an))...)) */
double functionTwo(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i = n; i > 0; i--)
    {
        p = a[i-1] + x * p;
    }
    return p;
}