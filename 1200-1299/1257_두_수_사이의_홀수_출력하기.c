// 시작수와 마지막 수가 입력되면
// 시작수부터 마지막 수까지의 모든 홀수를 출력하시오.

#include <stdio.h>

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
