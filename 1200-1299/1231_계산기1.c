// 연산식의 형식은 정수+정수 또는 정수-정수 또는 정수*정수 또는 정수/정수의 형태이다.

#include <stdio.h>

int main()
{
    int num1, num2;
    char calculater;

    scanf("%d%c%d", &num1, &calculater, &num2);

    if (calculater == '+')
    {
        printf("%d", num1 + num2);
    }
    else if (calculater == '-')
    {
        printf("%d", num1 - num2);
    }
    else if (calculater == '*')
    {
        printf("%d", num1 * num2);
    }
    else
    {
        printf("%.02f", (float)num1 / (float)num2);
    }

    return 0;
}