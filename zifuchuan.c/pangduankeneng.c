#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a = 1;
    char b;
    char c = '\n';
    while ((b = getchar()) != '\n')
    {
        if (c == b)
        {
            a++;
        }
        c = b;
    }
    printf("%d", a);
    return 0;
}