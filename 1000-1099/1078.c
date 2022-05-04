// 정수(1 ~ 100) 1개를 입력받아 1부터 그 수까지 짝수의 합을 구해보자.

#include <stdio.h>

int main()
{
    int x, sum = 0;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}