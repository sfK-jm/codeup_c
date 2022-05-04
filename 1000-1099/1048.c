// 정수 2개(a, b)를 입력받아 a를 2b배 곱한 값으로 출력해보자.

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", x << y );

    return 0;
}