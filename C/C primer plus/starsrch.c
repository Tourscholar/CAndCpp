// starsrch.c -- 使用strncmp()寒素 //

#include <stdio.h>
#include <string.h>
#define LISTSIZE 6

int main(void)
{
    const char * list[LISTSIZE] =
    {
        "astronomy", "astounding",
        "astrophysics", "ostracize",
        "asterism", "astrophpbia"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(list[i], "astro", 5) == 0)
        /* strncmp()函数可以比较到字符不同的地方，
            也可以只比较第3个参数指定的字符数 */
        {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning"
            "with astro.\n", count);
    
    return 0;
}