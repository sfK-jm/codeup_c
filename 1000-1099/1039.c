// 정수 2개를 입력받아 합을 출력하시오
// 단, 입력되는 정수는 -2147483648 ~ +2147483648 이다.
#include <stdio.h>

int main()
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    printf("%lld", x + y);

    return 0;
}