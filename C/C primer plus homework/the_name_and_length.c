// the_name_and_length.c -- 编程练习 //

#include <stdio.h>
#include <string.h>
int main(void)
{
    char first_name[40];
    char last_name[40];

    printf("Please enter your first name.\n");
    printf("Please rnter your last name.\n");
    scanf("%s", first_name);
    scanf("%s", last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name),strlen(first_name), 
                    strlen(last_name), strlen(last_name));

    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d", strlen(first_name), strlen(first_name),
                    strlen(last_name), strlen(last_name));

    return 0;

}