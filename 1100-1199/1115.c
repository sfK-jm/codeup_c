// 두 정수의 덧셈의 결과를 출력한다.
// 두 수는 int 범위를 넘어선 64비트 정수형 값이다.

#include <stdio.h>

int main()
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    printf("%lld", x + y);

    return 0;
}