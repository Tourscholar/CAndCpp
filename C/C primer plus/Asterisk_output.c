// Asterisk_output.c -- 星号输出程序 //
// This file is encoded in UTF-8 format //

#include <stdio.h>
int main(void)
{
    int number[5];
    int i, j, a, max;

    printf("Please enter five positive numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &number[i]);
    max = number[0];
    for (i = 1; i < 5; i++)
    {
        max = (max > number[i] ? max : number[i]);
        if (max == number[i])
            j = i;
        else
            continue;
    }
    if (max == number[0])
    {
        for (i = 0; i <= number[0] - 1; i++)
        {
            for (a = 0; a <= 4; a++)
            {
                if (number[a] + i < number[0])
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    else 
    {   
        for (i = 0; i <= number[j] - 1; i++)
        {
            for (a = 0; a <= 4; a++)
            {
                if (number[a] + i < number[j])
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
