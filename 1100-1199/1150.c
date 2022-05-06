// 세 정수가 주어지면 그 중 가장 작은 수를 출력한다.

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