// 3 6 9 게임의 왕이 되기 위한 마스터 프로그램을 작성해 보자.

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int y = 1; y <= x; y++)
    {
        if (y % 3 == 0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", y);
        }
    }
    return 0;
}