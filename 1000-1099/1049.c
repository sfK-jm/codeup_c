// 두 정수(a, b)를 입력받아
// a가 b보다 크면 1을, a가 b보다 작거나 같으면 0을 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", x > y);

    return 0;
}