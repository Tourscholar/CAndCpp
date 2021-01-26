// age.c -- ???? //

#include <stdio.h>
int main(void)
{
    int age;
    double mins;

    printf("Please enter your age now: ");
    scanf("%d", &age);
    
    mins = age * 3.15e7;
    printf("You are already alive %Le\n", mins);

    return 0;
}