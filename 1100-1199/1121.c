// 정수 계산에서 나머지를 구하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    scanf("%d %d", &num1, &num2);
    result = num1 % num2;
    printf("%d", result);

    return 0;
}
