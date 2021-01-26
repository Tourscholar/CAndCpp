// country.c -- 编程练习 //

#include <stdio.h>
void br(void);      /* 打印'Brazil, Russia'*/
void ic(void);      /* 打印'India, China' */

int main(void)
{
    printf("Brazil, Russia, India, China.\n");
    br();
    ic();

    return 0;
}

void br(void) 
{
    printf("Brazill, Russia.\n");
}

void ic(void)
{
    printf("India, China.");
}
