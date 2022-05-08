// 세 개의 직선이 있다.
// 숫자의 의미는 직선의 길이를 말한다.
// 이 직선으로 삼각형을 만들 수 있는지 판단하는 프로그램을 작성하시오.
// 삼각형의 성립 조건)
// a, b, c 가 변의 길이이고 c가 제일 긴 길이라고 한다면
// c < a + b 이면 삼각형이 성립됨.

#include <stdio.h>

int main(void)
{

    int num1, num2, num3, temp;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 >= num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 >= num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    if (num3 < num1 + num2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}