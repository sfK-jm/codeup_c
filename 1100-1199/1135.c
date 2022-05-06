// 두 정수(a, b)를 입력받아 a가 b보다 크거나 같으면(이상) 1, a가 b보다 작으면(미만) 0을 출력하는 프로그램을 작성해라

#include <stdio.h>

int main(void)
{
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 >= num2;
    printf("%d", result);
    return 0;
}
