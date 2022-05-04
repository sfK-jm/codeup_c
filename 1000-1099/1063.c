// 입력된 두 정수 a, b 중 큰 값을 출력하는 프로그램을 작성해보자.
// 단, 조건문을 사용하지 않고 3항 연산자 ? 를 사용한다.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    result = num1 > num2 ? num1 : num2;

    printf("%d", result);

    return 0;
}
