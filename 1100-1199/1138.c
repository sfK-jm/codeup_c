// 1(true, 참) 또는 0(false, 거짓) 이 입력되었을 때 결과를 반대로 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int num1, result;
    scanf("%d ", &num1);
    result = !num1;
    printf("%d", result);
    return 0;
}
