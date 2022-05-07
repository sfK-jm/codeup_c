// 1. 공의 위치가 50m~70m이면 슬기가 이김.
// 또는
// 2. 공의 위치가 6의 배수이면 슬기가 이김.
// 슬기가 던진 공의 위치가 입력으로 주어지면 슬기가 이기는 구간에는 "win"을 출력하고, 그 외에는 "lose"를 출력하시오.

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    if ((num >= 50 && num <= 70) || (num % 6 == 0))
        printf("win");
    else
        printf("lose");

    return 0;
}
