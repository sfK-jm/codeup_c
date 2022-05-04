// 입력된 정수 두 개를 비트단위로 xor 연산한 후 그 결과를 정수로 출력해보자.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    result = num1 ^ num2;

    printf("%d", result);

    return 0;
}
