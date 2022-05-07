// 정수 두개가 입력으로 들어오면 큰수 - 작은수의 값을 출력하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf("%d", num1 - num2);
    else
        printf("%d", num2 - num1);

    return 0;
}