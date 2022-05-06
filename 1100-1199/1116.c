// 두 정수를 입력받아 아래와 같이 출력하시오.

// ex)  3 2

// 3+2=5
// 3-2=1
// 3*2=6
// 3/2=1

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d-%d=%d\n", a, b, a - b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d/%d=%d\n", a, b, a / b);
}