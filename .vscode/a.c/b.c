#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    printf("****************************************************************************************");
    printf("\n");
    for (i = 0; i <= 24; i++)
    {
        printf("sin(%3d)=%+.4f", 15 * i, sin(15 * i * 3.1415926 / 180));
        printf("        ");
        if (sin(15 * i * 3.1415926 / 180) >= sin(0))
        {
            printf("                         *");
            for (j = 0; j < 20 * sin(15 * i * 3.1415926 / 180); j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
        if (sin(15 * i * 3.1415926 / 180) < sin(0))
        {
            for (j = 0; j < 50 + 20 * sin(15 * i * 3.1415926 / 180); j++)
            {
                printf(" ");
            }
            printf("*");
            for (k = 0; k < (-20) * sin(15 * i * 3.1415926 / 180) - 3; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}