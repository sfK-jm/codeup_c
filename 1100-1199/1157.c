// 슬기가 던진 공의 위치가 입력으로 주어지면 50이상 60이하이면 "win"을 출력하고, 그 외에는 "lose"를 출력하시오.

#include <stdio.h>

int main(void)
{
    float num;
    scanf("%f", &num);
    if (num >= 50.0 && num <= 60.0)
        printf("win");
    else
        printf("lose");

    return 0;
}
