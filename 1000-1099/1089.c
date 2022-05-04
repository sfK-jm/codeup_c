// 시작 값(a), 등차(d), 몇 번째인지를 나타내는 정수(n)가 입력될 때
// n번째 수를 출력하는 프로그램을 만들어보자.

#include <stdio.h>

int main()
{

    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);

    for (int i = 1; i < n; i++)
    {

        a += b;
    }
    printf("%d", a);

    return 0;
}