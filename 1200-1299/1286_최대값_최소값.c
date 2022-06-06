// 5개의 정수들의 최댓값과 최솟값을 구하는 프로그램을 작성하라.

#include <stdio.h>

int main()
{
    int max = -1000000;
    int min = 1000000;
    int n, i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n > max)
            max = n;
        if (n < min)
            min = n;
    }

    printf("%d\n%d", max, min);
    return 0;
}
