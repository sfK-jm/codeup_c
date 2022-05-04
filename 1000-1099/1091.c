// 시작 값(a), 곱할 값(m), 더할 값(d), 몇 번째인지를 나타내는 정수(n)가 입력될 때,
// n번째 수를 출력하는 프로그램을 만들어보자.

#include <stdio.h>

int main()
{

    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

    for (int j = 1; j < n; j++)
    {

        a *= m;
        a += d;
    }
    printf("%lld", a);

    return 0;
}