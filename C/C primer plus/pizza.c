// pizza.c -- 在比萨饼程序中使用已定义的常量 */

#include <stdio.h>
#define PI 3.14159
int main()
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius *radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parmeters are as follows:\n");
    printf("circumference = %10.2f, area = %10.2f\n", circum, area);

    return 0;
}