// 세 개의 숫자가 주어질 때 작은 순서로 나열 했을 때, 두번째 수를 출력해보자.
// ex)
// 5 9 2 가 있다면, 작은 순서로 나열하면 2 5 9이고 두번째 수는 5이다.

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

    printf("%d", num2);

    return 0;
}