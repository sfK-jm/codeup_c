// 분수의 크기를 비교하는 프로그램을 작성하시오.
// 분수는 a / b  , c / d 모양으로 주어진다.

#include <stdio.h>

int main()
{
    float num1, num2, num3, num4;
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

    float a, b;

    a = (float)(num1 / num2);
    b = (float)(num3 / num4);

    if (a > b)
    {
        printf(">");
    }
    else if (a == b)
    {
        printf("=");
    }
    else
    {
        printf("<");
    }

    return 0;
}