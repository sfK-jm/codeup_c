// 정수 2개(a, b) 를 입력받아 a를 b로 나눈 몫을 출력해보자.
// 단, -2147483648 <= a <= b <= +2147483647, b는 0이 아니다

#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", x /y);

    return 0;
}