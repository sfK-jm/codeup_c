// 실수 1개를 입력받아 그래로 출력해보자
// (단, 입력되는 실수의 범위는 +- 1.7*10-308 ~ +- 1.7*10308 이다.)

#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", x);

    return 0;
}