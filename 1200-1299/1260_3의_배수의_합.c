// 어떤 수 a, b가 주어진다.
// a와 b의 관계는 a <= b 이다.
// a에서 b까지의 수 중 3의 배수만 더하여 출력하시오.

#include <stdio.h>

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);

    sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    printf("%d", sum);

    return 0;
}
