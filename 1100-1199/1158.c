// 1. 공이 30m~40m나 60m~70m 에 들어오면 슬기가 이김.
// 2. 그 외의 구간에 떨어지면 체육선생님이 이김.
// 슬기가 던진 공의 위치가 입력으로 주어지면 슬기가 이기는 구간에는 "win"을 출력하고, 그 외에는 "lose"를 출력하시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if ((num >= 30 && num <= 40) || (num >= 60 && num <= 70))
        printf("win");
    else
        printf("lose");

    return 0;
}
