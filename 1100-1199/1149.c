// 두 정수 중 큰 정수를 출력한다.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 > num2 ? num1 : num2;
    printf("%d", result);
    return 0;
}