// 정수 1개를 입력받아 그대로 출력
// (단, 입력되는 정수의 범위는 0 ~ 4,294,967,295 이다.)

#include <stdio.h>

int main(void)
{
    unsigned int x;
    scanf("%u",&x);
    printf("%u", x);

    return 0;
}