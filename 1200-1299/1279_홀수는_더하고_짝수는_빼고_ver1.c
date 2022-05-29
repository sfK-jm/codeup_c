// 두 자연수 a, b 사이의 구간에 대해서
// 홀수는 더하고 짝수는 뺀다음의 합을 출력하시오.
// 예)
// a = 5, b=10 일 경우, 5 - 6 + 7 - 8 + 9 - 10 = -3

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
            result -= i;
        }
        else
        {
            result += i;
        }
    }

    printf("%d", result);
    return 0;
}
