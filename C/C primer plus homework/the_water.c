// the_water.c -- 编程练习 //

#include <stdio.h>
int main(void)
{
    int number;
    double molecule;

    printf("Pleas enter a number tht's mean the water molecule: ");
    scanf("%d", number);

    molecule = (number * 950) / 3.0e-23;
    printf("You have the water molecule of the is %e\n", molecule);

    return 0;
}