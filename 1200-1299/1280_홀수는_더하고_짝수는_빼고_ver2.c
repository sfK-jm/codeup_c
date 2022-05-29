// 두 자연수 a, b 사이의 구간에 대해서
// 홀수는 더하고 짝수는 빼는 식을 보여준 후 결과를 출력하시오.
// 단, 결과가 양수이면 +를 붙이지 않는다.
// 예)
// a = 5, b=10 일 경우, +5-6+7-8+9-10=-3
// a = 6, b=9 일 경우, -6+7-8+9=2

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int result = 0;

    for (int i = a; i <= b; i++)
    {

        if (i % 2 == 0)
        {
            printf("-%d", i);
            result -= i;
        }
        else
        {

            printf("+%d", i);
            result += i;
        }
    }

    printf("=%d", result);
    return 0;
}
