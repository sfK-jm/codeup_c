// 성적 계산

#include <stdio.h>

int main()
{
    double b, sum = 0;
    int number, i;
    for (i = 1; i <= 3; i++)
    {
        scanf("%lf %d", &b, &number);
        sum += b * number;
    }
    printf("%.1lf", sum);

    return 0;
}