// 길이 n이 입력되면 다음과 같은 숫자 피라미드를 출력한다.
// 예)
// n이 5이면
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
