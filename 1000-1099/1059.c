// 입력 된 정수를 비트단위로 참/거짓을 바꾼 후 정수로 출력해보자.

#include <stdio.h>

int main(void)
{
    int num1, result;

    scanf("%d", &num1);
    result = ~num1;

    printf("%d", result);

    return 0;
}