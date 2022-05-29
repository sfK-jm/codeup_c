// 어떤 숫자가 입력되면 그 숫자가 몇 자릿수 숫자인지 알아내는 프로그램을 작성하시오.
// 예)
// 7   ----> 1   (1자릿수)
// 10  ----> 2   (2자릿수)
// 4322 ----> 4   (4자릿수)

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int cnt = 0;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }

    printf("%d", cnt);
    return 0;
}