// 입력
// n과 r이 입력된다. (1<=r<=n<=12)
// 출력
// nCr의 값을 출력한다.

#include <stdio.h>
                 
int f(int k)
{
    if (k <= 1) return 1;
    else return k*f(k-1);
}

main()
{
    int n,r;
    scanf("%d%d", &n, &r);
    printf("%d", f(n) / f(r) / f(n-r) );
      
    return 0;
}
/*
int main()
{
    int n, r, m, i;
    int n_sum = 1, r_sum = 1, m_sum = 1;

    scanf("%d%d", &n, &r);
    m = n - r;

    for (i = n; i >= 1; i--)
    {
        n_sum = n_sum * i;
    }

    for (i = r; i >= 1; i--)
    {
        r_sum = r_sum * i;
    }

    for (i = m; i >= 1; i--)
    {
        m_sum = m_sum * i;
    }
    printf("%d", n_sum / (r_sum * m_sum));

    return 0;
}
*/