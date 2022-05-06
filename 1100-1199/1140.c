// 두 가지의 참(1) 또는 거짓(0)이 입력될 때, 둘 중 하나라도 참일 경우 1이, 그렇지 않으면 0이 출력되는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 || num2;
    printf("%d", result);
    return 0;
}
