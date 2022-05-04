// 8진수로 입력된 정수 1개를 10진수로 바꾸어 출력해라

#include <stdio.h>

int main(void)
{
    int x;
    scanf("%o", &x);
    printf("%d", x);

    return 0;
}