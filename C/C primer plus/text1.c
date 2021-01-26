#include <stdio.h>

long interchanger(int);

int main(void)
{
    int x;
    printf("Please enter a number:\n");
    scanf("%d", &x);
    printf("%ld", interchanger(x));

    return 0;
}

long interchanger(int x)
{
    int ans = 1;
    for (int i = 1;i < x;x--)
        ans = ans * x;
    return ans;
}