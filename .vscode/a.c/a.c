#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int a, b, c, sum;
    scanf("%d%d%d", &a, &b, &c);
    sum = 365 * (a - 2000) + ((a - 2000) / 4) - ((a - 2000) / 100) + ((a - 2000) / 400) + 1;
    if (!(a % 4 == 0 && a % 100 != 0 || a % 400 == 0))
    {
        switch (b)
        {
        case 1:
            break;
        case 2:
            sum += 31;
            break;
        case 3:
            sum += 59;
            break;
        case 4:
            sum += 90;
            break;
        case 5:
            sum += 120;
            break;
        case 6:
            sum += 151;
            break;
        case 7:
            sum += 181;
            break;
        case 8:
            sum += 212;
            break;
        case 9:
            sum += 243;
            break;
        case 10:
            sum += 273;
            break;
        case 11:
            sum += 304;
            break;
        case 12:
            sum += 334;
            break;
        }
    }
    else
    {
        switch (b)
        {
        case 1:
            break;
        case 2:
            sum += 31;
            break;
        case 3:
            sum += 60;
            break;
        case 4:
            sum += 91;
            break;
        case 5:
            sum += 121;
            break;
        case 6:
            sum += 152;
            break;
        case 7:
            sum += 182;
            break;
        case 8:
            sum += 213;
            break;
        case 9:
            sum += 244;
            break;
        case 10:
            sum += 274;
            break;
        case 11:
            sum += 305;
            break;
        case 12:
            sum += 335;
            break;
        }
    }
    if (a == 2000)
        sum = sum - 1;
    sum += c;
    if (sum % 5 <= 2)
    {
        printf("打鱼");
    }
    else
    {
        printf("晒网");
    }
    return 0;
}
