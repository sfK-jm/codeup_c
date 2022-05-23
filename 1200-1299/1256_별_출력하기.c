// 별(*)을 n개 만큼 출력한다.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*");
    }

    return 0;
}
