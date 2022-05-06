// 정수 a, x를 입력받아 a의 값을 x만큼 SHIFT(>>) 연산한 후 결과를 출력하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 >> num2;
    printf("%d", result);
    return 0;
}
