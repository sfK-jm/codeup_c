// 1부터 n까지, 1부터 m까지 숫자가 적힌
// 서로 다른 주사위 2개를 던졌을 때 나올 수 있는 모든 경우를 출력해보자.

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}