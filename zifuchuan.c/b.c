#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char a[7];
    scanf("%s", a);
    for (int i = 0, j = 5; i <= j; i++, j--)
    {
        char c = a[i];
        a[i] = a[j];
        a[j] = c;
    }
    printf("%s", a);
    return 0;
}