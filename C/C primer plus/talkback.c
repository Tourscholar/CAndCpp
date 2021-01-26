// talkback.c -- 演示与用户交互 //

#include <stdio.h>
#include <string.h>     /* 该头文件为与字符串相关类型,提供strlen()函数的原型 */
#define DENSITY 62.4    /* 使用C预处理器定义字符串常量 */
int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40];      /* name是一个可以容纳40个字符的数组 */

    printf("Hi!What's your first name?\n");
    scanf("%s", name);
    printf("%s,what's your weight in pounds?\n", name);
    scanf("%f",&weight);
    size = sizeof name;     /* sizeof运算符以字节为单位给出对象的大小 */
    letters = strlen(name);     /* strlen()函数获取字符串的长度 */
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n",
        name, volume);
    printf("Alse, your first name has %d letters,\n",
        letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}

