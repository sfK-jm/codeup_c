// 정수 n이 입력으로 들어오면 1부터 n까지의 합을 구하시오.

#include <stdio.h>

int main()
{

    int n, sum;
    scanf("%d", &n);

    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
