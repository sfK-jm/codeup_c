// 정수(1 ~ 100) 1개가 입력되었을 때 카운트다운을 출력해보자.

#include<stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    while (x != 0)
    {
        x--;
        printf("%d\n", x);
    }
    return 0;
}