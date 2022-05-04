// 정수(0 ~ 100) 1개를 입력받아 0부터 그 수까지 순서대로 출력해보자.

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i <= x; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}