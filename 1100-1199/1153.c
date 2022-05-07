// 두 정수가 입력된다.  두 정수의 크기를 비교하여 왼쪽 수가 크면 > 를 출력, 오른쪽 수가 크면 < 를 출력, 같으면 = 을 출력하시오.

#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
        printf(">");
    else if (num1 < num2)
        printf("<");
    else
        printf("=");
    return 0;
}
