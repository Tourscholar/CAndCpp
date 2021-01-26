// binary_conversion.c -- 二进制数转化为十进制 //
// This files is encoded in UTF-8 form at //

#include <stdio.h>
#include <math.h>

int b_to_d(long);

int main(void)
{
    long number;

    printf("This program convert binary numbers to decimal numbers.\n");
    printf("Please enter a binary number (q to quit):\n");
    while (scanf("%ld", &number) == 1)
    {
        printf("This binary number %ld is decimal number:%d\n",
                number, b_to_d(number));
        printf("Please enter a binary number (q to quit):\n");
    }
    printf("Thanks!");

    return 0;
}

int b_to_d(long n)
{
    int decimalNumber = 0, i = 0;
    int j;
    while (n != 0)
    {
        j = n % 10;
        n = n / 10;
        decimalNumber = decimalNumber + j * pow(2,i);
        i++;
    }
    
    return decimalNumber;
}