// 세 정수 a, b, c가 입력되었을 때, 짝수만 출력해보자.

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 % 2) == 0)
        printf("%d\n", num1);
    if ((num2 % 2) == 0)
        printf("%d\n", num2);
    if ((num3 % 2) == 0)
        printf("%d\n", num3);

    return 0;
}
