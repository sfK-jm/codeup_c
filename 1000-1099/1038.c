// 정수 2개를 입력받아 합을 출력하는 프로그램을 작성하시오
// -1073741824 ~ 1073741824

#include <stdio.h>

int main(void)
{
    long long int x, y;
    scanf("%lld%lld", &x, &y);
    printf("%lld", x+y );

    return 0;
}