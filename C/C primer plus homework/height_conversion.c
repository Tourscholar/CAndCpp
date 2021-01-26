// height_conversion.c -- 编程练习 //

#include <stdio.h>

int main(void)
{
    const float CONVERSION = 2.54;      /* 1英寸等一2.54厘米 */
    float height, c_height;
    

    printf("Enter a height in centimeters:");
    scanf("%f", &height);
    while (height > 0)
    {
        c_height = height / CONVERSION;
        printf("%.1f cm = 5 feet, %.2f inches.\n", height, c_height);
        printf("Enter a height in centimeters (<= 0 to quit):");
        scanf("%f", &height);
    }
    printf("Bye!");

    return 0;
}