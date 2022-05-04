// 입력된 세 정수 a, b, c 중 가장 작은 값을 출력하는 프로그램을 작성해보자.
// 단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3, result;

    scanf("%d %d %d", &num1, &num2, &num3);

    result = num1 < num2 ? num1 : num2;
    result = result < num3 ? result : num3;

    printf("%d", result);

    return 0;
}
