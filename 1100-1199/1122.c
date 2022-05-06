// 초를 입력받아 분 / 초의 형태로 출력하시오.

#include <stdio.h>

int main(void)
{
    int sec, min;

    scanf("%d", &sec);
    min = sec / 60;
    sec = sec % 60;
    printf("%d %d", min, sec);

    return 0;
}