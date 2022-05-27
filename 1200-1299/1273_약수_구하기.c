// 자연수 N이 주어지면 N의 약수를 오름차순으로 모두 출력하시오.

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
