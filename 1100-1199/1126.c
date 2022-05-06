// 정 수 두 개를 입력하면 두 수 사이의 기본 연산이 자동으로 이루어지는 프로그램을 제작해라.
// 기본 연산이란, 더하기, 빼기, 곱하기, 나누기, 나머지 연산 등 5가지 연산을 말한다.
// 두 정수의 기본 연산을 출력하는 정수 계산기를 제작하시오.

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
}
