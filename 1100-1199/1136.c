// 두 정수(a, b)를 입력받아 a와 b가 같으면 1, 같지 않으면 0을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 == num2;
    printf("%d", result);
    return 0;
}
