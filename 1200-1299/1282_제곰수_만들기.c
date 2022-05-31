// n이 입력되면 k를 빼서 제곱수를 만들 수 있는 k를 구하고,
// 그 제곱수에 루트를 씌운 수(제곱근) t를 구하여라.
// 이 때 k는 여러가지가 될 수 있는데 가장 작은 k를 출력한다.

#include <stdio.h>
int main()
{

    int n;
    int k, t;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if ((n >= i * i) && (n < (i + 1) * (i + 1)))
        {

            k = n - i * i;
            t = i;
            break;
        }
    }

    printf("%d %d", k, t);
    return 0;
}
